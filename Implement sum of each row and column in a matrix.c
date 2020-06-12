#include<stdio.h>
int main()
{
    int a[10][10],i,j,r,c;
    int rsum=0,csum=0;
    printf("Enter the number of rows and column:\n");
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
            rsum=rsum+a[i][j];
        }
        printf("Sum of the rows %d is %d\n",i+1,rsum);
        
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            csum=csum+a[j][i];
        }
        printf("Sum of the column %d is %d\n",i+1,csum);
        
    }
}
