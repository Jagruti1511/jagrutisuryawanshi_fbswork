#include<stdio.h>
int isStrong();
void main(){
	 isStrong()?printf("strong"):	printf("not strong");
}
int isStrong()
{
	int n,r,sum=0;
	
	printf("Enter the number:");
	scanf("%d",&n);
	int temp=n;
	
	while(n!=0)
	{
		
		int fact=1;
		int i=1;
		r=n%10;
		while(i<=r)
		{
			fact=fact*i;
			i++;
		}
		sum=sum+fact;
		n=n/10;
	}
	return temp==sum;
}