#include<stdio.h>
int add(int,int);
void main(){
	int a=10;
	int b=20;
	int ans;
	 ans=add(a,b);
	 printf("%d",ans);
}
int add(x,y){
	int c=x+y;
	return c;
}