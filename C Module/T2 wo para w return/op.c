#include<stdio.h>
int add();
int sub();
int mul();
int div();
int mod();
void main(){
	
	char op;
	printf("Enter operator(+,-,*,/,%) :");
	scanf("%c",&op);  
	
	   if(op=='+')
	   printf("addition :%d",add());
	   
	    else if(op=='-')
	    printf("subtraction:%d",sub());
	    else if(op=='*')
	    printf("mul :%d",mul());
	    else if(op=='/')
	    printf("div :%d",div());
	    else if(op=='%')
	    printf("mod :%d",mod());
	    else
	    printf("Invalid operator");
	    
	
}
int add()
{
	int no1,no2;
	printf("Enter the two numbers");
	scanf("%d%d",&no1,&no2);
	
	return no1+no2;
}
int sub()
{
	int no1,no2;
	printf("Enter the two numbers");
	scanf("%d%d",&no1,&no2);
	
	return no1-no2;
}
int mul()
{
	int no1,no2;
	printf("Enter the two numbers");
	scanf("%d%d",&no1,&no2);
	
	return no1*no2;
}
int div()
{
	int no1,no2;
	printf("Enter the two numbers");
	scanf("%d%d",&no1,&no2);
	
	return no1/no2;
}
int mod()
{
	int no1,no2;
	printf("Enter the two numbers");
	scanf("%d%d",&no1,&no2);
	
	return no1%no2;
}