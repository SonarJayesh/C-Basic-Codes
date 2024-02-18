#include<stdio.h>
int swap(int*,int*);
int main()
{
	int x=2,y=5;
	printf("\n values before swap x=%d ,y=%d",x,y);
	swap(&x,&y);
	printf("\n The values After swap x=%d ,y=%d",x,y);
	
	return 0;
}
int swap(int*x,int*y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	
}
