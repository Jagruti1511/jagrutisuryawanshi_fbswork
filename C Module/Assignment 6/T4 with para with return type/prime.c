#include<stdio.h>
int isPrime(int);
void main(){
     
     	int n;
	printf("Enter the number:");
	scanf("%d",&n);
    isPrime(n)?printf("number is prime"):printf("number is not prime");
}
int isPrime(int n)
{

	
	int flag=0;
	while(n<=1000)
	{
	
	int i=2;
	int flag=0;
	while(i<n){
		if(n%i==0){
			flag=1;
			break;
		}
		i++;
	
	}
	return flag==0;
}
}