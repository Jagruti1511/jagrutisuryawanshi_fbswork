#include<stdio.h>
int isFactorial(int);
void main(){
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	int fact=isFactorial(n);
	 printf("factorial is %d",fact);

}
  int isFactorial(int n) 
{
	
	int i=1;
	int fact=1;
	 while(i<=n){
	 	fact=fact*i;
	 	i++;
	 }
	 return fact;
}


