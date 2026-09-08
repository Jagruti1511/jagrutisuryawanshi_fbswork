#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the value");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a<b&&a<c)
	printf("a is smaller");
	else if(b<c)
	printf("b is smaller ");
	else
	printf("c is smaller");
}