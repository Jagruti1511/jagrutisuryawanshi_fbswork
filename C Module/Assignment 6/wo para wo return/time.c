#include <stdio.h>
void time();
void main(){
	time();
}
void time()
{
	int min=85;
	int hour=min/60;
	int b= min%60;
	printf("Min into hour and remainning Min %d %d",hour,b);
}