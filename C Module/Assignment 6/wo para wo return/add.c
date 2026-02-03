#include <stdio.h>
void add();
void main(){
	add();
}
void add()
{
	int no=372;
    int r1,r2,r3,sum;
	int q1;
	r1=no%10;
	q1=no/10;
	r2=q1%10;
	r3=q1/10;
	sum=r1+r2+r3;
	printf("%d",sum);
}