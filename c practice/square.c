#include<stdio.h>
void square(int );
void main(){
	int n=3;
		
	square( n);
}
 void square(int a){
 	a= a*a;

	printf("%d",a);
}