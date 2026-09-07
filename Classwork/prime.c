#include<stdio.h>
int isprime();
void main() {
	isprime()?printf("prime"):printf("not prime");
	
}
int isprime(){

 
  int no;
   printf("Enter the number:");
   scanf("%d",&no);
	//int flag=0;
for(int i=1; i<=no/1; i++) {
	if(i%2==0) {
		return 0;
	}
}

return 1;
}
