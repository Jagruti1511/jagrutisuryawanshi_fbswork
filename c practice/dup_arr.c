#include<stdio.h>
void main(){
	int arr[7]={2,5,2,8,6,8,7};
	 
	 
	 for(int i=0;i<7;i++){
	 	int duplicate=0;
	 	
	 	for(int j=i+1;j<7;j++){
	 		if(arr[i]==arr[j]){
			duplicate=1;
	 		break;
		 }
	}
	
	if(duplicate==1){
		printf("%d ",arr[i]);
	}
		 
	 }
}