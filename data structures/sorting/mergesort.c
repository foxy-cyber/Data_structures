#include <stdio.h>
#include <stdlib.h>
int ar[20];
void merge(int l, int mid, int h)
{
    int i, j, k;
    i = k = l;
    j = mid + 1;
    int b[100];
    while (i <= mid && j <= h)
    {
        if (ar[i] < ar[j])
            b[k++] = ar[i++];
        else
            b[k++] = ar[j++];
    }
    while (i <= mid)
        b[k++] = ar[i++];
    while (j <= h)
        b[k++] = ar[j++];
    for (i = l; i <= h; i++)
        ar[i] = b[i];
}
void mergesort(int l, int h)
{
    int mid;
    if (l < h)
    {
        mid = (l + h) / 2;
        mergesort(l, mid);
        mergesort(mid + 1, h);
        merge(l, mid, h);
    }
}
int main()
{
    int i, n;
    printf("Enter array size :");
    scanf("%d", &n);
    printf("Enter array elements:");
    for (i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    mergesort(0, n - 1);
    for (int i = 0; i < n; i++)
        printf("%d ", ar[i]);
    printf("\n");
}