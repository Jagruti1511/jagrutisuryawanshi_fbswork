#include<stdio.h>
int isGreater(int,int,int);
void main(){
	int a,b,c;
	printf("Enter the value:");
	scanf("%d%d%d",&a,&b,&c);
	if(isGreater(a,b,c)==1)
	printf("a is greatest");
	else if(isGreater(a,b,c)==2)
	printf("b is greatest");
	else
	printf("c is greatest");
}
int isGreater(int a,int b,int c)
{
	
	
	if(a>b && a>c)
	return 1;
	
	else if(b>c && b>a)
	return 2;
	
	else
	return 3;
	
}