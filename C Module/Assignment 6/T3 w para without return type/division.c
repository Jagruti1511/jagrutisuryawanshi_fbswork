#include<stdio.h>
void isDivide(int);
void main(){
		int a;
	printf("Enter the value");
	scanf("%d",&a);
	
	 isDivide(a);
}
void isDivide(int a)
{

	if(a%3==0 && a%5==0)
	  printf("a is divisible by 3 and 5",a);
	else if(a%3==0)
	printf("a is divisible by 3 ",a);
	else if(a%5==0)
	printf("a is divisible by  5",a);
	else
	printf("a is divisible by none");;
	
}