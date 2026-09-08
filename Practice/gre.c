#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("Enter the four value");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	if(a>b){
		if(a>c && a>d)
		printf("a is greater");
		else if(c>d)
		printf("c is greater");
	    else
	      printf("d is greater");
	}
	else {
	    if(b>c && b>d )
		printf("b is greater");
		
		else if(c>d)
			printf("c is greater");
		
	    else 
	        printf("d is greater");
	
}

}