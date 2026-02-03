#include<stdio.h>
int isPerson(int);
void main(){
	int age=82;
	isPerson(age)?printf("Eligible"):printf(" Not eligible");
}
int isPerson(int age)
{

	
	if(age>=18)
	{
	return 1;	
	}
	else{
	return 0;
	}
}