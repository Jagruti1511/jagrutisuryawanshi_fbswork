#include<stdio.h>
void main()
{
	int arr[6]={1,15,22,10,5,56};
	int i,j;
	printf("Even\n");
	for(i=0;i<6;i++){
		if(arr[i]%2==0)
		printf(" %d\n",arr[i]);
	}
	printf("Odd\n");
	for(j=0;j<6;j++){
		if(arr[j]%2!=0)
		printf("%d\n",arr[j]);
	}
}