#include<stdio.h>
int main()
{
    int arr[20],n,i,j,sum=0;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    printf("Enter the %d elements of array\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++)
    {
        
            sum+=arr[i]*arr[i];
        
    }
    printf("Sum is %d", sum);
    return 0;
}