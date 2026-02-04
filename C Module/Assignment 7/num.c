#include<stdio.h>
void isNum(int*);
void main(){
	int num=1;
	 isNum(&num);
} 
void isNum(int* num)
{
	while(*num<=10) {
    printf("%d\n",*num);
		(*num)++;
	}
}

