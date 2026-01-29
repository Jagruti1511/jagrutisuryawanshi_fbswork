#include<stdio.h>
void main()
{
	int range;
	printf("Enter range");
	scanf("%d",&range);
	for(int i=1;i<=range;i++){
		int temp=i,sum=0;
		while(temp!=0){
			int rem=temp%10;
			int fact=1;
			for(int j=1;j<=rem;j++){
				fact=fact*j;
			}
			sum=sum+fact;
			temp=temp/10;
		}
		if(i==sum)
			printf("\n %d strong number",i);
		
}
}