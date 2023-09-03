#include <stdio.h>
int binary(int a[], int st, int en, int sr)
{
    if (st > en)
        return 0;
    else
    {
        int m;
        m = (st + (en)) / 2;
        if (a[m] == sr)
            return m + 1;
        else if (a[m] >= sr)
            return (binary(a, st, (m - 1), sr));
        else
            return (binary(a, (m + 1), en, sr));
    }
}
int main()
{

    int i, n, sr, ar[10];
    printf("Enter array size :");
    scanf("%d", &n);
    printf("Enter array elements:");
    for (i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    printf("Enter search element:");
    scanf("%d", &sr);
    int pos = binary(ar, 0, n - 1, sr);
    if (pos != 0)
        printf("Search element at: %d ", pos);
    else
        printf("NOT found");
}