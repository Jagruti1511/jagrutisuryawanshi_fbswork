#include<stdio.h>
void isTwo();
void main(){
	 isTwo();
}
void isTwo()
{
	int range;
	printf("Enter the number:");
	scanf("%d",&range);
	for (int i=2;i<=range;i++){
		int flag=0;
		for(int j=2;j<i;j++){
			
			if(i%j==0)
			flag=1;
			break;
		}
		if(flag==0)
		printf("\n%d",i);
	}
}
