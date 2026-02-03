#include<stdio.h>
void isFactorial(int);
void main(){
		int n;
	printf("Enter the number:");
	scanf("%d",&n);
	 isFactorial(n);
}
void isFactorial(int n)
{

	int i=1;
	int fact=1;
	 while(i<=n){
	 	fact=fact*i;
	 	i++;
	 }
	 printf("factorial is %d",fact);
}

