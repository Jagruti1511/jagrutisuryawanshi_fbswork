#include<stdio.h>
void main(){
	int a=10;
	int b=20;
	//int* p;
	
	int* p=&a;
	int* q=&b;
	
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
	printf("%d\n",*p);
	printf("%d",*q);
	
	

}