#include<stdio.h>
void main(){
	int arr[5]={10,20,32,16,30};
int i;
int element=16;
int flag=0;

for( i=0;i<5;i++){
	if(arr[i]==element)
	{
	
	flag=1;
	break;
}
}
if(flag==1)
printf("fount at  arr[%d]",i);
else
	printf("not found");

}