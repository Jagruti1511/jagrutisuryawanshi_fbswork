#include<stdio.h>
void isOperator(int,int,char);
void main(){
		int no1,no2;
	
	printf("Enter the numbers");
	scanf("%d%d",&no1,&no2);
	char op;
 printf("Enter operator :");
	scanf(" %c",&op); 
	
	
	 isOperator(no1,no2,op);
}
void isOperator(int no1,int no2,char op)
{
 
	    if(op=='+')
	   printf("addition :%d",no1+no2);
	    else if(op=='-')
	    printf("Sub :%d",no1-no2);
	    else if(op=='*')
	    printf("mul :%d",no1*no2);
	    else if(op=='/')
	    printf("div :%d",no1/no2);
	    else if(op=='%')
	    printf("mod :%d",no1%no2);
	    else
	    printf("Incorrect operator");
}
