#include <iostream>
#include <string>
using namespace std;

class MyRectangle {
 public:
  MyRectangle();
  MyRectangle(double, double, string);

  double getLength() const;
  double getWidth() const;
  string getColor() const;
  double getArea() const;
  double getPerimeter() const;

  void setLength(double);
  void setWidth(double);
  void setColor(string);

  bool operator<(const MyRectangle&) const;

 private:
  double length_;
  double width_;
  string color_;
};

ostream& operator<<(ostream&, const MyRectangle&);
istream& operator>>(istream&, MyRectangle&);

MyRectangle::MyRectangle() : length_(0), width_(0), color_("white") {}

MyRectangle::MyRectangle(double length, double width, string color)
    : length_(length), width_(width), color_(color) {}

double MyRectangle::getLength() const 
{ return length_; }

double MyRectangle::getWidth() const 
{ return width_; }

string MyRectangle::getColor() const 
{ return color_; }

double MyRectangle::getArea() const 
{ return length_ * width_; }

double MyRectangle::getPerimeter() const 
{ return 2 * (length_ + width_); }

void MyRectangle::setLength(double length) 
{ length_ = length; }

void MyRectangle::setWidth(double width) 
{ width_ = width; }

void MyRectangle::setColor(string color) 
{ color_ = color; }

bool MyRectangle::operator <(const MyRectangle& other) const 
{return getArea() < other.getArea(); }

ostream& operator<<(ostream& os, const MyRectangle& rect) {
  os << "Length: " << rect.getLength() << " Width: " << rect.getWidth()
     << " Color: " << rect.getColor();
  return os;
}

istream& operator>>(istream& is, MyRectangle& rect) {
  double length, width;
  string color;
  is >> length >> width >> color;
  rect.setLength(length);
  rect.setWidth(width);
  rect.setColor(color);
  return is;
}


int main() {
  MyRectangle rect1(4, 5, "red");
  MyRectangle rect2(3, 4, "blue");

  cout << "Rectangle 1:" << endl;
  cout << rect1 << endl;
  cout << "Area: " << rect1.getArea() << endl;
  cout << "Perimeter: " << rect1.getPerimeter() << endl;
  cout << "\nRectangle 2:" << endl;
  cout << rect2 << endl;
  cout << "Area: " << rect2.getArea() << endl;
  cout << "Perimeter: " << rect2.getPerimeter() << endl;
if (rect1 < rect2) {
    cout << "\nRectangle 1 has a smaller area than Rectangle 2." << endl;
  } else {
    cout << "\nRectangle 1 has a larger or equal area to Rectangle 2." << endl;
  }
  cout << "\nEnter length, width, and color for a new rectangle: ";
  MyRectangle rect3;
  cin >> rect3;
  cout << "\nNew rectangle: " << rect3 << endl;
  cout << "Area: " << rect3.getArea() << endl;
  cout << "Perimeter: " << rect3.getPerimeter() << endl;
   rect3.setLength(6);
  rect3.setWidth(6);
  rect3.setColor("yellow");
  cout << "\nModified rectangle 3:" << endl;
  cout << rect3 << endl;
  cout << "Area: " << rect3.getArea() << endl;
  cout << "Perimeter: " << rect3.getPerimeter() << endl;

  if (rect2 < rect3) {
    cout << "\nRectangle 2 has a smaller area than Rectangle 3." << endl;
  } else {
    cout << "\nRectangle 2 has a larger or equal area to Rectangle 3." << endl;
  }
  return 0;
}
