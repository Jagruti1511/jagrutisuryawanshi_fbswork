#include<stdio.h>
int isage();
void main(){
	isage()?printf("Eligible"):printf("Not eligible");
}
int isage(){
	int age;
	printf("Enter the age:");
	scanf("%d",&age);
	
	if(age>=18)
	return 1;
	else
	return 0;
}