// Insert an Element in an Array //
#include <stdio.h>

int main()
{
    int n;
    printf("enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("enter the elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int pos, x;
    printf("enter the position: ");
    scanf("%d", &pos);
    printf("enter element to insert: ");
    scanf("%d", &x);

    for (int i = n; i >= pos; i--)
        a[i] = a[i - 1];

    a[pos - 1] = x;
    n++;

    printf("after: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}// update
