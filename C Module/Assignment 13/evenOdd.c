#include<stdio.h>
#include<stdlib.h>
void main()
{
	int arr[6]={1,15,22,10,5,56};  //Stack memory
	int *b=(int*)malloc(6*sizeof(int));  //Heap memory(malloc)
	int i,j;
	for(i=0;i<6;i++){
		b[i]=arr[i];
	}
	
	printf("Even\n");
	for(i=0;i<6;i++){
		if(b[i]%2==0)
		printf(" %d\n",b[i]);
	}
	printf("Odd\n");
	for(j=0;j<6;j++){
		if(b[j]%2!=0)
		printf("%d\n",b[j]);
	}
	free(b);
}