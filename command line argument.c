#include<stdio.h>
int main(int argc,char*argv[])
{
	printf("\n Name of my program:%s \t",argv[0]);
	if(argc==2)
	{
		printf("\n Values givan by user:%s \t",argv[1]);
	}
	else if(argc>2)
	{
		printf("\n Many values given by user\n");
	}
	else
	{
		printf("\n Single values expected:");
	}
	return 0;
}
