#include<stdio.h>
void main(){
	int a=100;
	int* ptr=&a;
	
	int b=*ptr * 2;
	
	printf("%d",b);
}