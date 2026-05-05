// Delete an Element from an Array //
#include <stdio.h>

int main()
{
    int n, pos;
    printf("enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("enter the elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("enter the position: ");
    scanf("%d", &pos);
    

    for (int i = pos - 1; i < n - 1; i++)
        a[i] = a[i + 1];

    n--;

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}// update
