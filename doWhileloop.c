#include<stdio.h>
int main()
{
	int i=0,n;
	printf("Enter the No:");
	scanf("%d",&n);
	do
	{
		printf("%d \n",i);
		i++;
	}
	while(i<=n);
}
