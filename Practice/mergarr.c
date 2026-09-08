#include<stdio.h>
void main(){
	int arr[5]={1,2,3,4,5};
	int brr[5]={11,12,13,14,15};
	int crr[10];
	int i,j;
	for(i=0;i<5;i++){
		crr[i]=arr[i];
	}
		for(j=0;j<5;j++){
		crr[i]=brr[j];
		i++;
	}
		printf("merge=");
			for(i=0;i<10;i++){
	
	printf("%d ",crr[i]);
 }
}