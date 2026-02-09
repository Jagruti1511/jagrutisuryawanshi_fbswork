#include<stdio.h>
void isFactorial(int arr[]);
void main(){
		int arr[1];
	printf("Enter the number:");
	scanf("%d",&arr[0]);
	 isFactorial(arr);
}
void isFactorial(int arr[])
{

	int i=1;
	int fact=1;
	 while(i<=arr[0]){
	 	fact=fact*i;
	 	i++;
	 }
	 printf("factorial is %d",fact);
}

