#include<stdio.h>
int main()
{
    int a[50],flag,k=0,n,i,j,r[n],rc=0;
    printf("Enter the size:\n");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        r[i]=0;
    }
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Repeating elements are:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j!=i && a[i]==a[j])
            {
                flag=0;
                for(k=0;k<n;k++)
                {
                    if(r[k]==a[i])
                    {
                        flag++;
                    }
                }    
                if(flag==0)
                {
                    r[rc]=a[i];
                    rc++;
                }
            }
        }
    }
    for(i=0;i<rc;i++)
    {
        printf("%d\t", r[i]);
    }
}