#include<stdio.h>
void main(){
	int a=25;
	int b=40;
	
	int* p=&a;
	int* q=&b;
	
	if(*p>*q){
		printf("big");
	}
	else{
		printf("small");
	}
}