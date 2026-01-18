#include <stdio.h>
void main()
{
	int a=10;
	int b=20;
	printf("before swap %d %d",a,b);
	int c;
	c=a;
	a=b;
	b=c;
	printf("After swap %d %d" ,a,b,c);
}