#include<stdio.h>
void main(){
	int arr[5],i;
	int brr[5];
	printf("Enter the number:");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++){
		
	brr[i]=arr[i];
	}
	printf("Enter the copy brr[]:");
	for(i=0;i<5;i++){
		
	printf("%d ",brr[i]);
}
}