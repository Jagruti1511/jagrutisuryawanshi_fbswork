#include<stdio.h>
void isPerson(int arr[]);
void main(){
	int age[1];
	printf("Enter the age:");
	scanf("%d",&age);
	isPerson( age);
}
void isPerson(int arr[])
{
	
	
	if(arr[0]>=60)
	{	
		printf("Senior"); 
	}	
	else if(arr[0]>=20 && arr[0]<=59)
	{
			printf("Adult");	
	}
	else if(arr[0]>12 && arr[0]<=19)
	 	printf("Teenager");
	else
	{
	   printf("Child");
	}

}