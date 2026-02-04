#include<stdio.h>
void evenOdd(int*);
void main(){
	int no=6;
	evenOdd(&no);
}
void evenOdd(int* no)
{
	
	if(*no%2==0){
		printf("even");
	}
	else{
		printf("odd");
	}
}