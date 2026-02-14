#include<stdio.h>
void main(){
	int arr[5]={10,20,32,16,30};
int i;
int element=16;
int* b=(int*)malloc(5*sizeof(int));
int flag=0;
for( i=0;i<5;i++){
	b[i]=arr[i];
}

for( i=0;i<5;i++){
	if(b[i]==element)
	{
	
	flag=1;
	break;
}
}
if(flag==1)
printf("fount at  arr[%d]",i);
else
	printf("not found");
	
	free(b);

}