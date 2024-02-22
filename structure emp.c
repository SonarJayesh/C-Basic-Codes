#include<stdio.h>
#include<string.h>
struct employee
{
	int code;
	char name[25];
	char department[25];
	float salary;
		
};
int main()
{
	struct employee b;
	
	printf("\n Enter the Employee Code:");
	scanf("%d",&b.code);
	fflush(stdin);
	
	printf("\n Enter the Employee Name:");
	gets(b.name);
	
	printf("\n Enter the Employee Department:");
	scanf("%s",&b.department);
	
	printf("\n Enter the Employee Salary:");
	scanf("%f",&b.salary);
	
	printf("\n ***Entered By User***");
	
	printf("\n Employee Code=%d",b.code);
	printf("\n Employee Name=%s",b.name);
	printf("\n Employee Department=%s",b.department);
	printf("\n Employee Salary=%f",b.salary);
	
	return 0;
}
