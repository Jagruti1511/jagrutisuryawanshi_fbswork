#include<stdio.h>
void abc();
void xyz();
void pqr();
void main()
{
	printf("start");
	abc();
	xyz();
	pqr();
	printf("end");
	
	
}

void abc(){
	xyz();
	printf("firstbit");
}
void xyz(){
	printf("solution");
	pqr();
}
void pqr(){
    printf("java");
}