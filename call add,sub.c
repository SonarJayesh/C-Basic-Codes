#include<stdio.h>
 void add(int,int);
 void sub(int,int);
 
 int main()
 {
 	int x,y;
 	printf("\n Enter the two No:");
 	scanf("%d%d",&x,&y);
 	add(x,y);
 	sub(x,y);
 	
 	return 0;
 }
 void add(int a,int b)
 {
 	printf("\n Addition=%d",a+b);
 	
 }
 void sub(int a,int b)
 {
 	printf("\n Subtraction=%d",a-b);
 }
