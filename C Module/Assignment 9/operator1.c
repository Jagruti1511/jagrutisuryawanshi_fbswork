#include<stdio.h>
void isOperator(int a[],int b[],char c[]);
void main(){
		int a[1],b[1];
	
	printf("Enter the numbers:");
	scanf("%d%d",&a[0],&b[0]);
	char c[1];
 printf("Enter operator :");
	scanf(" %c",&c[0]); 
	
	
	 isOperator(a,b,c);
}
void isOperator(int a[],int b[],char c[])
{
 
	    if(c[0]=='+')
	   printf("addition :%d",a[0] + b[0]);
	    else if(c[0]=='-')
	    printf("Sub :%d",a[0] - b[0]);
	    else if(c[0]=='*')
	    printf("mul :%d",a[0] * b[0]);
	    else if(c[0]=='/')
	    printf("div :%d",a[0] / b[0]);
	    else if(c[0]=='%')
	    printf("mod :%d",a[0] % b[0]);
	    else
	    printf("Incorrect operator");
}
