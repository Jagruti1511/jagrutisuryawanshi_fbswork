#include<stdio.h>
void main()
 {
	int no,dno;
	printf("enter number and divisible no" );
	scanf("%d%d",&no,&dno);
	if(no%dno==0)
		printf("divisible");
	
	else
		printf("not divisible");
	
}