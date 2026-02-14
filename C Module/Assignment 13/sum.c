#include<stdio.h>
#include<stdlib.h>
void main(){
	int arr[5]={1,2,3,4,5};
	int* b=(int*)malloc(5*sizeof(int));
	int i,sum=0;
	for(i=0;i<=5;i++){
		b[i]=arr[i];
	}
	for(i=0;i<=5;i++){
		sum=sum+i;
	}
	printf("Addition of the numbers: %d",sum);
	
	free(b);
}