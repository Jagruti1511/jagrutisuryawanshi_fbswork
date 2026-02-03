#include<stdio.h>
void isTwo(int);
void main(){
	int range;
	printf("Enter the number:");
	scanf("%d",&range);
	 isTwo(range);
}
void isTwo(int range)
{
	
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
