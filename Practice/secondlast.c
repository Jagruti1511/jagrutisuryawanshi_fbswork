#include<stdio.h>
void main(){
	int arr[5];
	int max1, max2;
	printf("Enter the number:");
	int i;
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++){
	    if(arr[i]>max1){
	    	max2=max1;
	    	max1=arr[i];
		}
		else if(arr[i]>max2 && arr[i]!=max1){
			max2=arr[i];
		}
	}
	printf("second largest=%d",max2);
}