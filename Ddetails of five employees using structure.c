#include<stdio.h>
struct employee
{
	int  empnum;
	char empname[20];
	float empsal;
};
int main()
{
	struct employee emp[10];
	int n,i;
	printf("Enter number of employees\n");
	scanf("%d", &n);
	printf("Enter %d employees details\n",n);
	for(i=0;i<n;i++)
	{
		printf("Enter employee %d details\n",i+1);
		printf("Enter the emp number\n");
		scanf("%d", &emp[i].empnum);
		printf("Enter the employee name\n");
		scanf("%s", emp[i].empname);
		printf("Enter the employee salary\n");
		scanf("%f", &emp[i].empsal);
	}
	printf("Employees details are\n");
	for(i=0;i<n;i++)
	{
		printf("Details of employee %d are\n",i+1);
		printf("Employee number is %d\n",emp[i].empnum);
		printf("Employee name is %s\n", emp[i].empname);
		printf("Employee salary is %f\n", emp[i].empsal);
	}
}