#include<stdio.h>
struct student
{
	char name[10];
	int id;
	float salary;
};
int main()
{
	struct student s[3];
	int i;
	for(i=0;i<3;i++)
	{
		printf("\n Enter the infomation:");
		printf("\n Enter the name,id,salary:");
		
		scanf("%s %d %f",&s[i].name,&s[i].id,&s[i].salary);
	}
	for(i=0;i<3;i++)
	{
		printf("\n name=%s",s[i].name);
		printf("\n id=%d",s[i].id);
		printf("\n Slary=%f",s[i].salary);
	}
}
