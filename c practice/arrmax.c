#include<stdio.h>
void main(){
	int a[5];
	int max=a[0];
	printf("Enter 5 number");
	for(int i=1;i<5;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<5;i++){
		if(a[i]>max);
		max=a[i];
	}
	printf("%d",max);
}