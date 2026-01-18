#include<stdio.h>
void main()
{
	int price,ds,fp;
	char ch;
	printf("Enter the value");
	scanf("%d",&price);
	printf("you are student (y/n)");
	scanf(" %c",&ch);
	
	if(ch=='y'){
		
	 if(price>500){
		ds=price*0.2;
		printf("you get a 20 percent discount");
	}
	 else{
		ds=price*0.1;
		printf("you get a 10 percent discount");
	}
}
    else if(ch=='n'){
    	
    	if(price>600){
		ds=price*0.15;
		printf("you get a 15 percent discount");
	}	
        else{
        ds=0;
        printf("you not get discount");
        
         
}
   }
   fp=price-ds;
      printf("\n price %d,discount %d, \nfinal price %d",price,ds,fp);
}