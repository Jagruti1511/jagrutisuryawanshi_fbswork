#include<stdio.h>
void isage();
void main(){
	isage();
}
void isage(){
	int age;
	printf("Enter the age:");
	scanf("%d",&age);
	
	if(age>=18)
	printf("Eligible");
	else
	printf("Not eligible");
}