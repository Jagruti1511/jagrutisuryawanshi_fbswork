#include<stdio.h>

void main(){
    int arr[5];
    int min;

    printf("Enter the 5 number: ");

    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    min=arr[0];

    for(int i=1;i<5;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }

    printf("%d",min);
}