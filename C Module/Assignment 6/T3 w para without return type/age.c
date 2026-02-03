#include<stdio.h>
void person(int);
void main()
{   int age=15;
	person(age);
}
void person(int age)
{

	
	if(age>=18)
	{
		printf("Eligible");
	}
	else{
		printf(" not eligible");
	}
}