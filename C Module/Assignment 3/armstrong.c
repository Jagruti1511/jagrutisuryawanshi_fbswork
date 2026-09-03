#include<stdio.h>
void main()
//{
//	int n,r,sum=0;
//	printf("Enter the number:");
//	scanf("%d",&n);
//	int temp=n;
//	
//	while(n!=0){
//		r=n%10;
//		sum=sum+r*r*r;
//		n=n/10;
//	}
//	printf("%d %d\n",sum,temp);
//	if(temp==sum){
//		printf("Armstrong number");
//	}
//	else{
//		printf("Not armstrong number");
//	}
//}


{
    int n, r, sum = 0, temp;

    printf("Enter the number: ");
    scanf("%d", &n);

    temp = n;

    for ( ; n != 0 ; n = n / 10)
    {
        r = n % 10;
        sum = sum + r * r * r;
    }

    if (sum == temp)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");
}