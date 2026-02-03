#include<stdio.h>
int isAmstrong();
void main(){
	 	 isAmstrong()?printf("Armstrong number"):	printf("Not armstrong number");
}
int isAmstrong()
{
	int n,r,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	int temp=n;
	
	while(n!=0){
		r=n%10;
		sum=sum+r*r*r;
		n=n/10;
	}
	return temp==sum;
	
}


