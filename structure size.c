#include<stdio.h>

struct jayesh
{
	int i;
	float f;
	char j;
}jayesh;
int main()
{
	int i=10;
	float f;
	char j;
	printf("\n The value of i=%d",i);
	printf("\n memory size occupied by jayesh=%d",sizeof(jayesh));
	printf("\n size of int i=%d",sizeof(i));
	printf("\n size of float f=%d",sizeof(f));
	printf("\n size of float j=%d",sizeof(j));
	
	return 0;
}

