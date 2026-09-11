#include<stdio.h>
void demo(int*,int*);
void main(){
	int a=10;
	int b=20;
	demo(&a,&b);
	printf("%d %d",a,b);
	
}
void demo(int* x, int* y){
	(*x)++;
	(*y)++;
	
}