#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter the no: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the no:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for( int i=0;i<n;i++)
   { sum = (sum+arr[i]/arr[n]);}
   printf("average of the element:%d\n",sum);
   return 0;
}