#include<stdio.h>
void main(){
   int a[5];
   int i;
   
   printf("Enter 5 number:");
   for(i=0;i<5;i++){
   	scanf("%d",&a[i]);
   }	
   
   for(i=0;i<5;i++){
      printf("%d ",a[i]);
   }
}