#include<stdio.h>
int square(int*);
void main(){
	int a=6;
	int ans;
	ans=square(&a);
	printf("%d",ans);
}
int square(int* x){
	int y=(*x) * (*x);
	return y;
	
}