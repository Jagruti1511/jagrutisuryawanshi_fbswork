#include<stdio.h>
#include<stdlib.h>
void main(){
	int a[10]={6,2,30,55,8,90,3,65,84,40};
    int*arr=(int*)malloc(10*sizeof(int));
	for(int i=0;i<10;i++){
		arr[i]=a[i];}
			printf("Alternate:");
	for(int i=0;i<10;i+=2){
		printf(" %d\n",arr[i]);
	}
	free(arr);

}