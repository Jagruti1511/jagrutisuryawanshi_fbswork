#include<stdio.h>
void isNum(int a[]);
void main(){
	int a[1]={2};
	 isNum(a);
} 
void isNum(int a[])
{
	while(a[0]<=10) {
    printf("%d\n",a[0]);
		(a[0])++;
	}
}

