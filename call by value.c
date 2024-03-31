#include<stdio.h>
void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
void swap(int x,int y);
int main()
{
	int x,y;
	printf("\n Enter the two No");
	scanf("%d%d",&x,&y);
	
	printf("values before swap X=%d Y=%d",x,y);
	swap(x,y);
	printf("\n Values after swap: X= %d Y= %d",x,y);
    
	return 0;
}
