1.WITH PARAMETER WITHOUT RETURNING VALUE

#include<stdio.h>
void add(int i, int j);
int main()
{
    int a=10,b=20;
    add(a,b);
}
void add(int i, int j)
{
    int sum;
    sum=i+j;
    printf("Sum is %d", sum);
}

2.WITH PARAMETER WITH RETURNING VALUE

#include<stdio.h>
int add(int i,int j);
int main()
{
    int sum,a=10,b=20;
    sum=add(a,b);
    printf("Sum is %d", sum);
}
int add(int i, int j)
{
    int sum;
    sum=i+j;
    return sum;
}


3.WITHOUT PARAMETER WITH RETURNING VALUE


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



4.WITHOUT PARAMETER WITHOUT RETURNING VALUE


#include<stdio.h>
void add();
int main()
{
    add();
}
void add()
{
    int sum,i=10,j=40;
    sum=i+j;
    printf("Sum is %d", sum);
}