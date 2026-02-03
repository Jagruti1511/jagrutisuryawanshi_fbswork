#include<stdio.h>
int isAge(int);
void main(){
	int age;
	printf("Enter the age:");
	scanf("%d",&age);
	 
	if(isAge(age)==1)
	printf("Senior");
	else if(isAge(age)==2)
	printf("Adult"); 
	else if(isAge(age)==3)
	printf("Teenager");
	else
	printf("Child");
}
int isAge(int age)
{
	
	
	if(age>=60)
	{	
		return 1;
	}	
	else if(age>=20 && age<=59)
	{
			return 2;	
	}
	else if(age>12 && age<=19)
	 	return 3;
	else
	{
	   return 4;
	}

}