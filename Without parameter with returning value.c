#include<stdio.h>
int add();
int main()
{
    int sum;
    sum=add();
    printf("Sum is %d", sum);
}
int add()
{
    int sum,i=10,j=40;
    sum=i+j;
    return sum;
}