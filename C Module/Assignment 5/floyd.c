#include<stdio.h>
void main(){
	int n=4;
	int i,j;
	int count=0;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			count++;
			printf("%d",count);
		}
		printf("\n");
	}
	
}