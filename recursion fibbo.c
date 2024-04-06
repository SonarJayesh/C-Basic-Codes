#include<stdio.h>
int fibbo(int i)
{
	if(i==0)
	{
		return 0;
	}
	if(i==1)
	{
		return 1;
	}
	return fibbo(i-1)+fibbo(i-2);
}
int main()
{
	int i;
	for(i=0;i<=20;i++)
	{
		printf("%d\n ",fibbo(i));
	}
	return 0;
}


