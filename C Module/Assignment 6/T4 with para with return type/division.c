#include<stdio.h>
int isDivision(int);
void main(){
		int a;
	printf("Enter the value:");
	scanf("%d",&a);
	 if(isDivision(a)==1)
	 printf("a is divisible by 3 and 5",a);
	 else if(isDivision(a)==2)
	 printf("a is divisible by 3 ",a);
	 else if(isDivision(a)==3)
	 printf("a is divisible by  5",a);
	 else
	 printf("a is divisible by none");
}
int isDivision(int a)
{

	
	if(a%3==0 && a%5==0)
	  return 1;
	else if(a%3==0)
	return 2;
	else if(a%5==0)
	return 3;
	else
	return 4;
	
}