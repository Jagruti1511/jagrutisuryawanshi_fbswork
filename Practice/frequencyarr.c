#include<stdio.h>
void main(){
	int arr[8]={1,2,3,4,2,3,2,7};
	int i,j;
	int count=0;
	
	for(i=0;i<8;i++){
		if(arr[i]==-1)
		
		continue;
		count=1;
		
	
	for(j=i+1;j<8;j++){
	
	if(arr[i]==arr[j]){
		count++;
		arr[j]=-1;
}
	}
	
	printf("%d occurs: %d times\n",arr[i],count);
}
}