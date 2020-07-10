#include<stdio.h>
void swap(int*x,int*y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
int main()
{
    int num1,num2;
    printf("Enter the two numbers\n");
    scanf("%d%d", &num1, &num2);
    printf("Before swapping num1 is:%d, num2 is:%d\n",num1,num2);
    swap(&num1,&num2);
    printf("After swapping num1 is:%d, num2 is:%d\n",num1,num2);
}