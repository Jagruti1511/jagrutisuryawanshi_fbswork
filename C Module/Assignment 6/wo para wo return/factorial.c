#include<stdio.h>
void isFactorial();
void main(){
	 isFactorial();
}
void isFactorial()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	int i=1;
	int fact=1;
	 while(i<=n){
	 	fact=fact*i;
	 	i++;
	 }
	 printf("factorial is %d",fact);
}

