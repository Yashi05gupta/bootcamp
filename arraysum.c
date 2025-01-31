#include<stdio.h>
int main()
{
    int i,n,sum =0;
    printf("enter the number: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the no:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {sum +=arr[i];
    }
    printf("sum of the elements: %d\n",sum);
    return 0;
}