#include<stdio.h>
int getNumber();
void main(){
	int ans=getNumber();
	printf("%d",ans);
}
int getNumber(){
	return 100;
}