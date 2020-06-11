#include<stdio.h>

int main()
{
    int i,j,m,n, first[10][10], second[10][10], sum[10][10], diff[10][10];
    printf("Enter the number of rows and columns of the  matrix\n ");
    scanf("%d%d", &m, &n);

    printf("Enter the %d elements of the first matrix ", m*n);
     for(i = 0; i < m; i++)
    {
        for(j = 0;j < n; j++)
        {
            scanf("%d", &first[i][j]);
        }
    }
    printf("Enter the %d elements of the second matrix \n", m*n);
     for(i = 0; i < m; i++)
    {
        for(j = 0;j < n; j++)
        {
            scanf("%d", &second[i][j]);
        }
    }
      printf("The sum of the two  matrices is: ");
    for(i = 0; i < m; i++)
    {
        for(j = 0;j < n; j++)
        {
            sum[i][j] = first[i][j] + second[i][j ];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
     printf("The differenc of the two  matrices is: ");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            diff[i][j] = first[i][j] - second[i][j];
            printf("%d\t", diff[i][j]);
        }
        printf("\n");
    }
}
   
   

    

    
   

   
    
    
  
   
    

    
   