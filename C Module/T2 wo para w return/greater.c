#include<stdio.h>
int greater();
void main(){
	 int x=greater();
	 if(x==1)
	 printf("a is greatest");
	 else if(x==2)
	 printf("b is greatest");
	 else
	 printf("c is greatest");
}
	int greater()
{

	int a,b,c;
	printf("Enter the value");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b && a>c)
	return a;
	
	else if(b>c && b>a)
	return b;
	
	else
	return c;
	
}

//void main(){
//	printf(" %d is greater",greater());
//
//}
//	int greater()
//{
//
//	int a,b,c;
//	printf("Enter the value");
//	scanf("%d%d%d",&a,&b,&c);
//	
//	if(a>b && a>c)
//	return a;
//	
//	else if(b>c && b>a)
//	return b;
//	
//	else
//	return c;
//	
//}