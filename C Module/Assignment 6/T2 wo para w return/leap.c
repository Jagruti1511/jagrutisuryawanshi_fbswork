#include<stdio.h>
int isLeap();
void main(){
	isLeap()?printf("leap"):printf("not leap");
}
	int isLeap(){
		int year;
		printf("Enter the year:");
		scanf("%d",&year);
		 if(year%4==0 && year%100!=0 || year%400==0)
		 return 1;
		 else
		 return 0;
	}