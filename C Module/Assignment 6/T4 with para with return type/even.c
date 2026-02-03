#include<stdio.h>
int evenOdd(int);
void main() {
	int no=7;
	evenOdd(no)?printf("even"):printf("odd");
}
int evenOdd(int no) {

	if(no%2==0)
		return 1;

	else
		return 0;

}