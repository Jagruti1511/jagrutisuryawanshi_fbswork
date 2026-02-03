#include<stdio.h>
void isAmstrong(int);
void main(){
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	 isAmstrong(n);
}
void isAmstrong(int n)
{
	int r,sum=0;
	
	int temp=n;
	
	while(n!=0){
		r=n%10;
		sum=sum+r*r*r;
		n=n/10;
	}
	printf("%d %d\n",sum,temp);
	if(temp==sum){
		printf("Armstrong number");
	}
	else{
		printf("Not armstrong number");
	}
}


