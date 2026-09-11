#include <stdio.h>
//void main(){
//  int a=10;
//  char ch='x';
//  double d1=20.8;
//  
//  int* iptr;
//  char* cptr;
//  double* dptr;
//  
//  iptr=&a;
//  //int *ptr=40;
//  printf("%u",*iptr);
//  
//  //printf("%d",a);
//}


void main(){
	int a=10;
	int* ptr;
	ptr=&a;
	printf("a ki value %d \n",a);
	printf("a ka address %u \n",&a);
	printf("ptr ko value %u",ptr);
	}