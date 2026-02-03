#include<stdio.h>
void isNew(int);
void main(){
	int year=1992;
	isNew(year);
}
void isNew(int year)
{
	
	if(year%4==0 && year%100!=0 || year%400==0)
	{
		printf("leap year");
	}
	else{
		printf("not leap year");
	}
}