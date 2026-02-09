#include<stdio.h>
void isNew(int a[]);
void main(){
	int a[1]={2004}	;
	isNew(a);
}
void isNew(int a[])
{
	
	if(a[0]%4==0 && a[0]%100!=0 || a[0]%400==0)
	{
		printf("leap year");
	}
	else{
		printf("not leap year");
	}
}