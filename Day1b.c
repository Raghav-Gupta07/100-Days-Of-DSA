#include<stdio.h>
int main()
{
int n, target;
printf("enter the number of elements: ");
scanf("%d",&n);

int a[n];
printf("enter the elements: ");
for (int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the target number: ");
scanf("%d",&target);
for (int i=0 ; i<n ; i++)
{
   for(int j=i+1 ; j<n ; j++)
   {
       if( a[i] + a[j] == target)
       {
       printf(" [%d , %d]", i, j);
       }
   }
}
return 0;

}// update
