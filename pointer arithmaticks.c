#include<stdio.h>
const int max=3;
int main()
{
	int var[]={10,100,200};
	int i,*ptr;
	
	ptr=var;
	for(i=0;i<max;i++)
	{
		printf("\n Address of var [%d]=%x \n ",i,ptr);
		printf("\n values of var[%d]=%x \n",i,*ptr);
		ptr++;
	}
return 0;
}
