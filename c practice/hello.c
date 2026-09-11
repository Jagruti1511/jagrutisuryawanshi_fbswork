#include<stdio.h>

//wo p wo returntype
//
//void sum();
//void main(){
//	hello();
//}
//
//hello(){
//
//printf("Hallo word");
//}

//wo p aith rt

//int hello();
//void main(){
// int  x;
// x=hello();
// printf("%d",x);
//}
//int  hello(){
//   printf("Hello World");
//    return 1;
//}

//w p wo returntype

//void hello(int);
//void main(){
//	int a;
//	hello(a);
//
//}
//void hello(int x){
//	 printf("Hello World");
//}

//w p with returntype
int hello(int);
void main(){
	int x;
	int ans;
	ans=hello(x);
	printf("%d",x);
}
int hello(int x){
	printf("Hello word");
	return 0;
}


