#include<stdio.h>
void isAmstrong(int arr[]);
void main(){
	int arr[1];
	printf("Enter the number:");
	scanf("%d",&arr[0]);
	 isAmstrong(arr);
}
void isAmstrong(int arr[])
{
	int r,sum=0;
	
	int temp=arr[0];
	
	while(arr[0]!=0){
		r=arr[0]%10;
		sum=sum+r*r*r;
		arr[0]=arr[0]/10;
	}
	printf("%d %d\n",sum,temp);
	if(temp==sum){
		printf("Armstrong number");
	}
	else{
		printf("Not armstrong number");
	}
}


