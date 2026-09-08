#include<stdio.h>
void main(){
//	int n=5;
//	int i,j;
//	for( i=1;i<=n;i++){
//		for(j=1;j<=n;j++){
//			if(i==1||j==1||i==5||j==5||i==j||i+j==6)
//				printf(" * ");
//		else
//		printf("   ");
//		}
//		printf("\n");
//	}
//	
	
	
//	int n=5;
//	int i,j,k;
//	for(i=1;i<=n;i++){
//		for(k=n;k>i;k--){
//			printf(" ");
//		}
//		
//		for(j=1;j<=i;j++){
//			printf("* ");
//		
//		}
//		printf("\n");
//	}


int n=5;
	int i,j;
	for( i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j>=i)
				printf("* ");
		else
		printf(" ");
		}
		printf("\n");
	}
}
