#include<stdio.h>
void main()
{
	//int n;
	//printf("Enter the number:");
	//scanf("%d",&n);
	int n=2;
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
	if(flag==0){
	//	printf("number is prime");
	printf("\n %d",n);
	}
	//else{
	//	printf("number is not prime");
	//}
	n++;
}
}