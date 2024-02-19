#include<stdio.h>
int main()

{
	int i=10;
	int *j=&i;
	
	int **ptr=&j;
	
	printf("Address of i=%d",&j);
	printf("\n Value of j=%d",ptr);
}
