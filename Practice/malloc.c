#include<stdio.h>
#include<stdio.h>
void main(){
//	int*p;
//	p=(int*)malloc(sizeof(int));
//	*p=50;
//	printf("Value=%d\n",*p);
//	free(p);
//	p=NULL;

 int *a;
 int *b=malloc(sizeof(int));
  b[0]=11;
 printf("value of b%d\n",b[0]);
  printf("adrees of a%d\n",&a);
   printf("address of b%d\n",&b);
    printf("valur of a%d\n",a[0]);
	}