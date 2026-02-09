#include<stdio.h>
void person(int arr[]);
void main()
{   int age[1]={2};
	person(age);
}
void person(int arr[])
{
	if(arr[0]>=18)
	{
		printf("Eligible");
	}
	else{
		printf(" not eligible");
	}
}