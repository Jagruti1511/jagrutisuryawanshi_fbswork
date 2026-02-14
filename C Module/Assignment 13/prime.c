#include<stdio.h>
#include<stdlib.h>
void main(){
	int a[12]={1,2,3,4,5,6,7,8,11,15,13,17};
	int* b=(int*)malloc(12*sizeof(int));
	//int i,j;
	for(int i=0;i<12;i++){
		b[i]=a[i];
	}
	printf("Prime number:");
	for(int i=0;i<12;i++){
		int flag=0;
		for(int j=2;j<a[i];j++){
			if(b[i]%j==0){
				flag=1;
				break;
			}
		}
			if(flag==0)
			printf("\n  %d",b[i]);
		
	}
	free(b);
}