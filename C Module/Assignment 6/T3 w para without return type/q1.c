#include<stdio.h>
void isOne(int);
void main(){
	int range;
	
	printf("Enter range");
	scanf("%d",&range);
	 isOne(range);
}
void isOne(int range)
{
	
	for(int i=1;i<=range;i++){
		int sum=0;
		int count=0;
		int no =i;
//		printf("\nno =%d",no);
		while(no!=0)
		{
			count++;
			no=no/10;
			
		}
//		printf("\ncount =%d",count);
		int temp =i;
		while(temp!=0){
			int rem=temp%10;
			int res=1;
			
			for(int j=1;j<=count;j++){
			res=res*rem;
			
			}
			sum =sum+res;
			temp=temp/10;
		}
		if(i==sum)
			printf("\n %d armstrong number",i);
	
}
}