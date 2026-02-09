#include<stdio.h>
void isGreater(int arr[],int brr[],int crr[]);
void main(){
	int arr[1],brr[1],crr[1];
	printf("Enter the value:");
	scanf("%d%d%d",&arr[0],&brr[0],&crr[0]);
	isGreater(arr,brr,crr);
}
void isGreater(int arr[],int brr[],int crr[])
{
	
	
	if(arr[0]>brr[0] && arr[0]>crr[0])
	printf("a is greatest");
	
	else if(brr[0]>crr[0] && brr[0]>arr[0])
	printf("b is greatest");
	
	else
	printf("c is greatest");
	
}