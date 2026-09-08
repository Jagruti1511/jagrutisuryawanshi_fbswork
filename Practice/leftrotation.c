#include<stdio.h>
void main(){
	int arr[5]={6,7,8,9,10};
	int i,n=5,k;
	while(k--){
	
	int temp=arr[0];
	
	for(i=0;i<n-1;i++){
		arr[i]=arr[i+1];
	}
	arr[n-1]=temp;
}
	printf("Rotate number:");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
