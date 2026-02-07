#include<stdio.h>
void main(){
	
	int arr[4]={1,2,3,4};
	int size=4;
	int temp;
	
	printf("before revers:");
	for(int i=0;i<size;i++)
	printf("%d",arr[i]);
	
	for(int i=0;i<size/2;i++){
	
		temp=arr[i];
		arr[i]=arr[size-i-1];
		arr[size-i-1]=temp;	
}
 printf("\nAfter revers:");
 for(int i=0;i<size;i++)
 printf("%d",arr[i]);
}