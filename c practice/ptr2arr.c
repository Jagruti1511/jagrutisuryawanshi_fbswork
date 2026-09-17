#include<stdio.h>
void main(){
	int arr[5]={10,20};
	int* ptr;
	ptr=&arr[0];
	printf("Address of 0th pointer %u \n",arr[0]);
	printf("arr minus %u \n",arr);
	printf("ptr ki value %u \n",ptr);
}