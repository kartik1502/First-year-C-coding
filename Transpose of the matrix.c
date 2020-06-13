#include<stdio.h>
int main()
{
    int mat1[10][10],mat2[10][10],m,n,i,j;
    printf("Enter the size of the row:\n");
    scanf("%d", &n);
    printf("Enter the size of the column:\n");
    scanf("%d", &m);
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
             scanf("%d", &mat1[i][j]);
             printf("%d\t", mat1[i][j]);    
        }
        printf("\n");
    }
    printf("The transpose of the matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            mat2[i][j]=mat1[j][i];
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }
}