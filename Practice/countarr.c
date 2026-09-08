#include<stdio.h>
void main(){
	int arr[4],i;
	int count=0;
	printf("Enter the number:");
	for(i=0;i<4;i++){
		scanf("%d",&arr[i]);
		
	}
	for(i=0;i<4;i++){
	//if(arr[i]%2==0)   //For even count
		if(arr[i]%2!=0) //For odd count
	{
		count++;
	}
	
		
	}
	printf("count:%d",count);	
	
}