#include<stdio.h>
void main(){
	int arr[10]={2,6,3,2,3,7,2};
	int i,j,temp;
	int n=7;
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				int temp=j;
				for(temp=temp;temp<n-1;temp++){
					arr[temp]=arr[temp+1];
				}
				n--;
				j--;
			}
		}
	}
	printf("array after removing duplicate:\n");
	for(i=0;i<n;i++){
	
	printf("%d ",arr[i]);
}
}