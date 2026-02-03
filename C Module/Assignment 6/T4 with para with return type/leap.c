#include<stdio.h>
int isNew(int);
void main(){
	int year=1700;
	 isNew(year)?printf("leap year"):printf("not leap year");
}
int isNew(int year)
{
	
	if(year%4==0 && year%100!=0 || year%400==0)
	return 1;	
	
	else
		return 0;
	
}