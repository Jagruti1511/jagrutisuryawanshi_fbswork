#include<stdio.h>
void main(){
	int arr[100];
	int i,n,pos;
	printf("Enter the number of elment:");
	scanf("%d",&n);
	printf("enter the element:");
	for(i=0;i<n;i++){
	scanf("%d",&arr[i]);}
	printf("Enter position to delete(0 to %d): ", n-1);
    scanf("%d", &pos);
    
    for(i=pos;i<n-1;i++){
    	arr[i]=arr[i+1];
	}

	n--;
	
	for(i=0;i<n;i++){
	printf("%d ",arr[i]);}
}