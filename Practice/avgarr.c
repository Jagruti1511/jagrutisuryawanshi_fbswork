#include<stdio.h>
void main(){
	int arr[6],i;
    float avg;
	int sum=0;
	printf("Enter the number:");
	for(i=0;i<6;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<6;i++)
	
	sum=sum+arr[i];

	avg=sum/6.0;
	printf("%2f",avg);

}