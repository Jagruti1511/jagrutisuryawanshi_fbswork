#include<stdio.h>
void main(){
	int a=10,b;
	int *x=&a;
	*x=30;
	int *p=&b;
	*p=60;
	int c=*p;
	x=p;
	*p=70;
	printf("%d",a,b,*x,x,c,p,*p);
}