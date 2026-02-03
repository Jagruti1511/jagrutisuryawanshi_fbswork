#include<stdio.h>
int isFactorial();
void main(){
	int fact=isFactorial();
	 printf("factorial is %d",fact);
}
int isFactorial()
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
	return fact;
}

