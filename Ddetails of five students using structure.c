#include<stdio.h>
struct student
{
	int  studnum;
	char studname[20];
	float studfee;
};
int main()
{
	struct student stud[10];
	int n,i;
	printf("Enter number of students\n");
	scanf("%d", &n);
	printf("Enter %d students details\n",n);
	for(i=0;i<n;i++)
	{
		printf("Enter student %d details\n",i+1);
		printf("Enter the stud number\n");
		scanf("%d", &stud[i].studnum);
		printf("Enter the student name\n");
		scanf("%s", stud[i].studname);
		printf("Enter the student fees\n");
		scanf("%f", &stud[i].studfee);
	}
	printf("students details are\n\n");
	for(i=0;i<n;i++)
	{
		printf("Details of student %d is\n",i+1);
		printf("student number is %d\n",stud[i].studnum);
		printf("student name is %s\n", stud[i].studname);
		printf("student fees is %f\n\n", stud[i].studfee);
	}
}