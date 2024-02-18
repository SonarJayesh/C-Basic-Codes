#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,n,i;
	printf("\n Enter the No:");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("\n Memory not allocated ");
		exit(0);
	}
	else
	{
		printf("\n Memory sussesfully allocated:");
		for(i=0;i<n;i++)
		{
			ptr[i]-i+1;
		}
		printf("\n The Element of the Array Is:");
		for(i=0;i<n;i++)
		{
			printf("\n %d",ptr[i]);
		}
	}
	return 0;
}
