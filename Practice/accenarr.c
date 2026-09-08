#include<stdio.h>
void main(){
	int arr[6],i,j,temp;
	printf("Enter the numbers:");
	for(i=0;i<6;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<6;i++){
		for(j=i+1;j<6;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
			
	}
	printf("Ascending order:");
	for(i=0;i<6;i++){
		printf("%d ",arr[i]);
	}
	
}