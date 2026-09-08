#include<stdio.h>
void main(){
	int arr[5]={1,2,3,4,5};
	int i,n=5,k;
	while(k--){
	
	int temp=arr[n-1];
	
	for(i=n-1;i>0;i--){
	arr[i]	=arr[i-1];
	}
	arr[0]=temp;
}
	printf("Rotate number:");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}