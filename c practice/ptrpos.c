#include<stdio.h>
void main(){
	int a;
	scanf("%d",&a);
	int* ptr=&a;
	if(a>0){
		printf("Positive");
	}
	else{
		printf("Negative");
	}
//	printf("%d",*ptr);
}