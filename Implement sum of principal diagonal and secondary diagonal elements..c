#include<stdio.h>
int main()
{
    int a[10][10],i,j,r,c;
    int pdsum=0,sdsum=0;
    printf("Enter the number of rows and column\n");
    scanf("%d%d", &c, &r);
    printf("Enter array element\n");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d", &a[i][j]);
         
        }
       
    }
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i=j)
            pdsum=pdsum+a[i][j];
        }
    }
    printf("Sum of all elements of principal diagonal is %d\n",pdsum);
    i=0;
    for(j=c-1;j>=0;j--)
    {
        sdsum=sdsum+a[i][j];
        i++;
    }
    printf("Sum of all the elements of secondary diagonal is %d\n",sdsum);
}
