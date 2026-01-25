#include<stdio.h>
void main() {
	int start,end;
	int sum=0;
	printf("enter the number");
	scanf("%d%d",&start,&end);
	while(start<=end) {
		sum=sum+start;
		start++;
	
	}
	printf("%d",sum);
}