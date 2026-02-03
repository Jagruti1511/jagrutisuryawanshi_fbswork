#include<stdio.h>
void isLeap();
void main(){
	isLeap();
	}
	void isLeap(){
		int year;
		printf("Enter the year:");
		scanf("%d",&year);
		 if(year%4==0 && year%100!=0 || year%400==0)
		 printf("leap");
		 else
		 printf("not leap");
	}
