#include<stdio.h>
void main()
{
	long a;
	printf("Enter the value:");
	scanf("%ld",&a);
	if(a<1)
		printf("Enter valid amount");
	
	else if(a>=500)
	printf("500 notes:%ld \n",a/500);
	a=a%500;
	    if(a>=200)
	printf("200 notes:%ld \n",a/200);
	a=a%200;
		if(a>=100)
	printf("100 notes:%ld \n",a/100);
	a=a%100;
		if(a>=50)
	printf("50 notes:%ld \n",a/50);
	a=a%50;
		if(a>=20)
	printf("20 notes:%ld \n",a/20);
	a=a%20;
		if(a>=10)
	printf("10 notes:%ld \n",a/10);
	a=a%10;
		if(a>=5)
	printf("5 coin:%ld \n",a/5);
	a=a%5;
		if(a>=2)
	printf("2 coin:%ld \n",a/2);
	a=a%2;
		
}