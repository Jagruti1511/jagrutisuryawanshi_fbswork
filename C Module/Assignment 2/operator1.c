#include<stdio.h>
void main()
{
	int no1,no2;
	char op;
	printf("Enter the numbers");
	scanf("%d%d",&no1,&no2);
	printf("Enter operator :");
	scanf(" %c",&op);  
	
	if(op!='+'||op!='*'||op!='-'||op!='%',op!='/')
	printf("put the correct operator");
	   else if(op=='+')
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
