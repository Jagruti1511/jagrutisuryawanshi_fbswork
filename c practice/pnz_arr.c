#include<stdio.h>
void main(){
	int arr[8]={5,-2,0,8,-7,0,9,4};
	
	int p=0,n=0,z=0;
	
	for(int i=0;i<8;i++){
		if(arr[i]>0){
			p++;
		}
		else if(arr[i]<0){
			n++;
		}
		else{
		z++;
		}
	}
	
	printf("Positive=%d\n",p);
		printf("Negtive=%d\n",n);
			printf("Zero=%d\n",z);
}