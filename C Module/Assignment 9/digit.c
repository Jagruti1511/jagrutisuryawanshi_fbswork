#include<stdio.h>
void isDigit(int arr[]);
void main(){
	int arr[1]={9584687};
	isDigit(arr);
} 
void isDigit(int arr[])
{
	
	int start,end,sum;
	end= arr[0]%10;
	while( arr[0]>=10) {

	 arr[0]= arr[0]/10;
	}

	start= arr[0];
	sum=start+end;
	printf("%d",sum);
}



