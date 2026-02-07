#include<stdio.h>
void main(){
//	int arr[8]={20,8,6,90,7,1,3,4};
//int min=arr[0];
//int size=8;
//int i;
//for(int i=1;i<size;i++)
//{
//	if(arr[i]<min)
//	min=arr[i];
//}
//printf("Min =\n%d",min);

//  Maximum value

//int arr[8]={20,8,6,90,7,1,3,4};
//int max=arr[0];
//int size=8;
//int i;
//for(int i=1;i<size;i++)
//{
//	if(arr[i]>max)
//	max=arr[i];
//}
//printf("Max =\n%d",max);



int arr[8]={2,8,1,90,65,70,15,20};
int i,j,temp;
int size=8;
for(i=0;i<size;i++){
	for(j=i+1;j<size;j++){
		if(arr[i]<arr[j]){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
	}
}
	}
	printf("Assending order:\n");
	for(i=0;i<size;i++){
			printf("\n%d",arr[i]);

}
	}
