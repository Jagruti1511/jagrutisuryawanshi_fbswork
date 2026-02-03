#include<stdio.h>
void isGreater(int,int,int);
void main(){
	int a,b,c;
	printf("Enter the value:");
	scanf("%d%d%d",&a,&b,&c);
	isGreater(a,b,c);
}
void isGreater(int a,int b,int c)
{
	
	
	if(a>b && a>c)
	printf("a is greatest");
	
	else if(b>c && b>a)
	printf("b is greatest");
	
	else
	printf("c is greatest");
	
}