#include<stdio.h>
void main(){
	int a=10;
	int b=60;
	int c=1000;
	
	int* p=&a;
	int* q=&b;
	int* r=&c;
	
	if(*p>*q && *p>*r){
		printf("a is bigger");
	}
	else if(*q>*p && *q>*r){
		printf("b is bigger");
	}
	else{
		printf("c is bigger");
	}
}