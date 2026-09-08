#include<stdio.h>
void main(){
	int arr[5];
	int i,min1,min2;
	printf("Enter the number:");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	min1=arr[0];
	min2=arr[0];
	for(i=0;i<5;i++){
		if(arr[i]<min1){
			min2=min1;
			min1=arr[i];
		}
		else if(arr[i]<min2 && arr[i]!=min1){
			min2=arr[i];
		}
	}
		printf("second smallest=%d",min2);
}