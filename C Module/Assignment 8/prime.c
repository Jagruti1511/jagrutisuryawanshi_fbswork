#include<stdio.h>
void main(){
	int a[12]={1,2,3,4,5,6,7,8,11,15,13,17};
	//int i,j;
	printf("Prime number:");
	for(int i=0;i<12;i++){
		int flag=0;
		for(int j=2;j<a[i];j++){
			if(a[i]%j==0){
				flag=1;
				break;
			}
		}
			if(flag==0)
			printf("\n  %d",a[i]);
		
	}
}