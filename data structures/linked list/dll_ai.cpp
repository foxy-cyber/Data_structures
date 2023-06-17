
#include<iostream>
#include<string>
using namespace std;
class Employee
{
    public:
        string ssn, name, dept, designation;
        int salary;
};
class Node
{
    public:
        Employee emp;
        Node *prev, *next;
};
class DLL
{
    private:
        Node *first, *last;

    public:
        DLL()
        {
            first = last = NULL;
        }

        bool isEmpty()
        {
            return first == NULL;
        }

        void insert(Employee emp)
        {
            Node *t = new Node;
            t->emp = emp;
            t->prev = NULL;
            t->next = first;

            if (isEmpty())
                first = last = t;
            else
            {
                first->prev = t;
                first = t;
            }
        }
 
        void insertLeftOfNode(string keyName, Employee emp)
        {
            if (isEmpty())
            {
                cout << "List is empty. Cannot insert employee." << endl;
                return;
            }

            Node *p = first;

            while (p != NULL)
            {
                if (p->emp.name == keyName)
                {
                    Node *t = new Node;
                    t->emp = emp;

                    if (p == first)
                    {
                        t->prev = NULL;
                        t->next = first;
                        first->prev = t;
                        first = t;
                    }
                    else
                    {
                        t->prev = p->prev;
                        t->next = p;
                        p->prev->next = t;
                        p->prev = t;
                    }

                    cout << "Employee inserted successfully." << endl;
                    return;
                }

                p = p->next;
            }

            cout << "Employee with name " << keyName << " not found." << endl;
        }

        void deleteEmployee(string keyName)
        {
            if (isEmpty())
            {
                cout << "List is empty. Cannot delete employee." << endl;
                return;
            }

            Node *p = first;

            while (p != NULL)
            {
                if (p->emp.name == keyName)
                {
                    if (p == first && p == last)
                        first = last = NULL;
                    else if (p == first)
                    {
                        first = p->next;
                        first->prev = NULL;
                    }
                    else if (p == last)
                    {
                        last = p->prev;
                        last->next = NULL;
                    }
                    else
                    {
                        p->prev->next = p->next;
                        p->next->prev = p->prev;
                    }

                    delete p;
                    cout << "Employee deleted successfully." << endl;
                    return;
                }

                p = p->next;
            }

            cout << "Employee with name " << keyName << " not found." << endl;
        }

        void display()
        {
            if (isEmpty())
            {
                cout << "List is empty." << endl;
                return;
            }

            Node *p = first;

            while (p != NULL)
            {
                cout << "SSN: " << p->emp.ssn << endl;
                cout << "Name: " << p->emp.name << endl;
                cout << "Department: " << p->emp.dept << endl;
                cout << "Designation: " << p->emp.designation << endl;
                cout << "Salary: " << p->emp.salary << endl;

                p = p->next;
            }
        }
};

int main()
{
    DLL empList;

    while (true)
    {
    cout << endl;
    cout << "MENU" << endl;
    cout << "1. Insert new employee" << endl;
    cout << "2. Insert new employee to the left of a given employee" << endl;
    cout << "3. Delete an employee" << endl;
    cout << "4. Display all employees" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";

    int choice;
    cin >> choice;

    switch (choice)
    {
        case 1:
        {
            Employee emp;
            cin.ignore();
            cout << "Enter SSN: ";
            getline(cin, emp.ssn);
            cout << "Enter name: ";
            getline(cin, emp.name);
            cout << "Enter department: ";
            getline(cin, emp.dept);
            cout << "Enter designation: ";
            getline(cin, emp.designation);
            cout << "Enter salary: ";
            cin >> emp.salary;

            empList.insert(emp);
            break;
        }

        case 2:
        {
            string keyName;
            Employee emp;
            cin.ignore();
            cout << "Enter name of employee to insert to the left of: ";
            getline(cin, keyName);
            cout << "Enter SSN: ";
            getline(cin, emp.ssn);
            cout << "Enter name: ";
            getline(cin, emp.name);
            cout << "Enter department: ";
            getline(cin, emp.dept);
            cout << "Enter designation: ";
            getline(cin, emp.designation);
            cout << "Enter salary: ";
            cin >> emp.salary;

            empList.insertLeftOfNode(keyName, emp);
            break;
        }

        case 3:
        {
            string keyName;
            cin.ignore();
            cout << "Enter name of employee to delete: ";
            getline(cin, keyName);

            empList.deleteEmployee(keyName);
            break;
        }

        case 4:
        {
            empList.display();
            break;
        }

        case 5:
        {
            cout << "Exiting program." << endl;
            return 0;
        }

        default:
        {
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    }

    cout << endl;
}
}