#include<stdio.h>
#include<stdlib.h>
void main(){
	
	int arr[4]={1,2,3,4};
	int size=4;
	int* b=(int*)malloc(size*sizeof(int));
	int temp;
		for(int i=0;i<size;i++){
			b[i]=arr[i];
		}
	
	printf("before revers:");
	for(int i=0;i<size;i++)
	printf("%d",b[i]);
	
	for(int i=0;i<size/2;i++){
	
		temp=b[i];
		b[i]=b[size-i-1];
		b[size-i-1]=temp;	
}
 printf("\nAfter revers:");
 for(int i=0;i<size;i++)
 printf("%d",b[i]);
 
 free(b);
}