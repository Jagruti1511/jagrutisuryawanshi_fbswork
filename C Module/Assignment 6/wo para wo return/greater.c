#include<stdio.h>
void greater();
void main(){
	 greater();
}
	void greater()
{

	int a,b,c;
	printf("Enter the value");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b && a>c)
	printf("a is greatest");
	
	else if(b>c && b>a)
	printf("b is greatest");
	
	else
	printf("c is greatest");
	
}