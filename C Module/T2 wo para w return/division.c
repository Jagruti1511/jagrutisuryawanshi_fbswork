#include<stdio.h>
int  division();
void main(){
	int n=division();
	if(n==1)
	printf("a is divisible by 3 and 5",n);
	else if(n==2)
	printf("a is divisible by 3 ",n);
	else if(n==3)
	printf("a is divisible by 5",n);
	else if(n==4)
	printf("a is divisible by none",n);
}
int division()
{
	int a;
	printf("Enter the value");
	scanf("%d",&a);
	
	if(a%3==0 && a%5==0)
	  return 1;
	else if(a%3==0)
	return 2;
	else if(a%5==0)
	return 3;
	else
	return 4;
		
		
}