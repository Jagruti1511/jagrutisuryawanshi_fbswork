#include<stdio.h>
#include<stdlib.h>
void main(){
//	int arr[8]={20,8,6,90,7,1,3,4};
//	int size=8;
//	int* b=(int*)malloc(size*sizeof(int));
//
//int i;
//for(int i=0;i<size;i++){
//	b[i]=arr[i];
//}
//int min=b[0];
//for(int i=1;i<size;i++)
//{
//	if(b[i]<min)
//	
//	min=b[i];
//
//	
//}
//printf("Min =%d\n",min);
//free(b);

//  Maximum value

int arr[8]={20,8,6,90,7,1,3,4};
int size=8;
int*b=(int*)malloc(size*sizeof(int));
for(int i=0;i<size;i++){
	b[i]=arr[i];
}
int max=b[0];

int i;
for(int i=1;i<size;i++)
{
	if(b[i]>max)
	max=b[i];
}
printf("Max =%d\n",max);
free(b);



//FOR ASSENDING AND DESSENDING OERDER

//int arr[8]={2,8,1,90,65,70,15,20};
//int size=8;
//int *b=(int*)malloc(size*sizeof(int));
//int i,j,temp;
//
//for(i=0;i<size;i++){
//	b[i]=arr[i];
//}
//
//for(i=0;i<size;i++){
//	for(j=i+1;j<size;j++){
//		if(b[i]>b[j]){
//			temp=b[i];
//			b[i]=b[j];
//		b[j]=temp;
//	}
//}
//	}
//	printf("Assending order:\n");
//	for(i=0;i<size;i++){
//			printf("\n%d",b[i]);
//
//}
//free(b);
	}
