#include<stdio.h>
void checkEvenOdd(int);
void main(){
	int n=11;

	checkEvenOdd(n);
}
void checkEvenOdd(int a){
		if(a%2==0){
		printf("even");
	}
	else{
		printf("odd");
	}
	}


