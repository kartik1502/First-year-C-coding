#include<stdio.h>
int main()
{
    int a[10],n,i,j,temp;
    printf("Enter the size of the array:");
    scanf("%d\n", &n);
    printf("%d", n);
    printf("\n Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d\n", &a[i]);
        printf("%d\t", a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n Second smallest element in the array is :%d", temp);
}
