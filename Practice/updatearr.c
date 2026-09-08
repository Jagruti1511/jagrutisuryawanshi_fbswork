#include<stdio.h>
void main(){
	int arr[100];
	int i,n,pos,value;
	printf("Enter the number of elment:");
	scanf("%d",&n);
	printf("enter the element:");
	for(i=0;i<n;i++){
	scanf("%d",&arr[i]);}
	printf("Enter position to uodate(0 to %d): ", n-1);
    scanf("%d", &pos);
    printf("Enter the value:");
	scanf("%d",&value);
    
    arr[pos]=value;
	
	
	for(i=0;i<n;i++){
	printf("%d ",arr[i]);
	}
}