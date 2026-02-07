#include<stdio.h>
void main(){
	int a[10]={6,2,30,55,8,90,3,65,84,40};
	int i;
	printf("Alternate:");
	for(i=0;i<10;i+=2){
		printf(" %d\n",a[i]);
	}
}