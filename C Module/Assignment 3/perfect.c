#include<stdio.h>
void main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	int sum=0;
	int i=1;
	while(i<n)
	{
		if(n%i==0){
		
		sum=sum+i;
	}
		i++;
	}
	if(sum==n){
		printf("Number is perfect");
	}
	else{
		printf("Number is not perfect");
	}
}