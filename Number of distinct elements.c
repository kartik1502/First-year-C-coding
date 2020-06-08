#include<stdio.h>
int main()
{
    int a[50],count=0,flag,n,p,i,j;
    printf("Enter the size:\n");
    scanf("%d", &n);
    printf("Enter the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
    {
        p=a[i];
        flag=0;
        for(j=0;j<n;j++)
        {
            if(j!=i)
            {
                if(p==a[j])
                {
                    flag++;
                    break;
                }
            }
        }
        if(flag==0)
        {
            count++;
        }
    }
    printf("No of distinct elements: %d", count);
}