#include<stdio.h>
void main(){
	int arr[5],i,temp;//size=5;
	printf("Enter the value:");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
    
    for(i=0;i<5/2;i++){
    
		
    	temp=arr[i];
    	arr[i]=arr[5-i-1];
    	arr[5-i-1]=temp;
    
	}
	printf("Reversed values:");
	for(i=0;i<5;i++){
		printf("%d ",arr[i]);
}
}