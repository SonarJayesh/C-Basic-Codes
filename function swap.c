#include<stdio.h>
void swap(int ,int );
void main()
{
	int a,b;
	printf("Enter the two NO:");
	scanf("%d%d",&a,&b);
	printf("\n A=%d\n B=%d",a,b);
	swap(a,b);
	
	
}
void swap(int a,int b)
{
	
	int temp=a;
	a=b;
	b=temp;
	
	printf("\n A=%d,B=%d",a,b);
}
