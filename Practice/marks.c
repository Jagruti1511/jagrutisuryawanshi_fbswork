#include<stdio.h>
void main()
{
	int marks;
	printf("Enter the marks");
	scanf("%d",&marks);
	 if(marks>=35){
	 	if(marks>=80)
		 printf("Get the scholarship");
		 else
		 printf("pass");
	 }
	 else{
	 	printf("fail");
	 }
}