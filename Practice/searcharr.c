#include<stdio.h>
void main(){
	int arr[4],i;
	int key,found=0;
	printf("Enter the numbers:");
	for(i=0;i<4;i++){
		scanf("%d",&arr[i]);
		}
		{
				printf("enter number to search:");
		scanf("%d",&key);
		}
	
	
	
	for(i=0;i<4;i++){
		if(arr[i]==key){
			found=1;
			break;
		
		}
	}
		if(found==1){
			printf("element found"	);
		}
		else
		printf("not found");
		
	
}
