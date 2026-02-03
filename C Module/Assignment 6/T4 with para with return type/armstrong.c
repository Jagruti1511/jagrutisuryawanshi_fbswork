#include<stdio.h>
int isAmstrong(int);
void main(){
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	 isAmstrong(n)?printf("Armstrong number"):printf("Not armstrong number");
}
int isAmstrong(int n)
{
	int r,sum=0;
	
	int temp=n;
	
	while(n!=0){
		r=n%10;
		sum=sum+r*r*r;
		n=n/10;
	}
	return temp==sum;
	
}


