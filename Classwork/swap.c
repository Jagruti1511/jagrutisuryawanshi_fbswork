#include<stdio.h>
void swap(int*,int*);
void main()
{
	int a=10,b=20;
	printf("before swap %d and %d",a,b);
	swap(&a,&b);
	printf("\nAfter swap %d and %d",a,b);
}
void swap(int* x, int * y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	
}