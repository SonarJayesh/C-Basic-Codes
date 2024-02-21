#include<stdio.h>

union jayesh
{
	int i;
	float f;
	char j;
};
int main()
{
	union jayesh jay;
	int i=10;
	printf("\n The value of i=%d",i);
	printf("\n memory size occupied by jayesh=%d",sizeof(jay));
//	printf("\n size of int i=%d",sizeof(i));
//	printf("\n size of float f=%d",sizeof(f));
//	printf("\n size of float j=%d",sizeof(j));
	
	return 0;
}

