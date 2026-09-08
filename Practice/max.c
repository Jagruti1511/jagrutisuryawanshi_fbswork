#include<stdio.h>
void main(){
	int arr[6],i;
	int max;
	printf("Enter the number:");
	scanf("%d",&arr[0]);
	max=arr[0];
	for(i=1;i<6;i++){
		scanf("%d",&arr[i]);
		
	}
	for(i=1;i<6;i++){
	 if(arr[i]>max){
	 	max=arr[i];
	 }
	 
	}
	printf("%d",max);	
	
}