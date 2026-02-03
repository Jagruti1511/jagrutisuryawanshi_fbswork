#include<stdio.h>
int student();
int generalDiscount();
void main() {
	char status,discount;
	printf("are you student (y/n)");
	scanf(" %c",&status);

	if(status=='y' || status=='Y')
	    printf("Discount = %d",student());
		
    else
		printf("Discount = %d",generalDiscount());


}
int student() 
{
	int price;

	printf("Enter the value");
	scanf("%d",&price);


		if(price>500) {
			return price*0.2;
		} 
		else {

			return price*0.1;;
		}
}
int generalDiscount()
{
	int price;
	printf("Enter the value");
	scanf("%d",&price);
	if(price>600) 
	{
		return price*0.15;
	} 
	else 
	{
	  	return 0;
	}
}
