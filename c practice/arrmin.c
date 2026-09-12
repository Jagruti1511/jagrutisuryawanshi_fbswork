#include<stdio.h>
void main(){
	int a[5];
	int min=a[0];
	
	printf("Enter the 5 number");
	for(int i=1;i<5;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<5;i++){
		if(min<a[i]){
			min=a[i];
		}
		printf("%d",min);
	}
}