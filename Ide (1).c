#include<stdio.h>
int main()
{
    int n,i=0;
    printf("Enter the number\n");
    scanf("%d", &n);
    while(n!=0)
    {
        i++;
        n=n/10;
    }
    printf("Number of digits %d",i);
}
