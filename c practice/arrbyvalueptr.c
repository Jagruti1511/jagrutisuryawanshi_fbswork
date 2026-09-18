#include<stdio.h>

int* myFun(int*);

void main() {
    int a = 10;
    int* ptr1;

    ptr1 = &a;

    ptr1 = myFun(ptr1);

    printf("%d", *ptr1);
}

int* myFun(int* ptr) {
    return ptr;
}