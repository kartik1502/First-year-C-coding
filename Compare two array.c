#include<stdio.h>
int main()
{
    int arr1[10],arr2[10],i,n1,n2,count=0;
    printf("Enter the size of array1 and array2\n");
    scanf("%d%d", &n1, &n2);
    printf("Enter the elements of array1\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the elements of array2\n");
    for(i=0;i<n2;i++)
    {
        scanf("%d", &arr2[i]);
    }
    if(n1!=n2)
    {
        printf("Are not equal");
    }
    else
    {
        for(i=0;i<n1;i++)
        {
            if(arr1[i]!=arr2[i])
            {
                count++;
            }
        if(count==0)
        {
             printf("Are equal.");
        }
        else
        {
            printf("Not equal.");
        }
        return 0;
        }
    }
}
    
