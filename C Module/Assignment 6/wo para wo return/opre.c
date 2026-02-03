#include<stdio.h>
void operator();
void main(){
	operator();
}
void operator(){
	int no1,no2;
	char op;
	printf("Enter the two numbers");
	scanf("%d%d",&no1,&no2);
	printf("Enter operator :");
	scanf(" %c",&op);  
	
	
	    if(op=='+')
	    printf("addition :%d",no1+no2);
	    if(op=='-')
	    printf("Sub :%d",no1-no2);
	    if(op=='*')
	    printf("mul :%d",no1*no2);
	    if(op=='/')
	    printf("div :%d",no1/no2);
	    if(op=='%')
	    printf("mod :%d",no1%no2);
	    
	    
	    
	
}