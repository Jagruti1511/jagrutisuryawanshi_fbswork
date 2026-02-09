#include<stdio.h>
void isDivide(int arr[]);
void main(){
		int arr[1];
	printf("Enter the value:");
	scanf("%d",&arr[0]);
	
	 isDivide(arr);
}
void isDivide(int arr[])
{

	if(arr[0]%3==0 && arr[0]%5==0)
	  printf("a is divisible by 3 and 5",arr);
	else if(arr[0]%3==0)
	printf("a is divisible by 3 ",arr);
	else if(arr[0]%5==0)
	printf("a is divisible by  5",arr);
	else
	printf("a is divisible by none");;
	
}