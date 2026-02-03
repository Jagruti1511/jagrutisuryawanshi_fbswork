#include<stdio.h>
int isDiscount(int);
int generalDiscount(int);
void main() {
	int price;
	char status,discount;
	printf("Enter the price:");
	scanf(" %d",&price);
	
	printf("Are you student (y/n):");
	scanf(" %c",&status);
	if(status=='y'|| status=='Y')
		printf("Discount=%d",isDiscount(price));
	else
		printf("Discount = %d",generalDiscount(price));

}
int isDiscount(int price) {
	




	if(price>500) {

		return price*0.2;
	} else {

		return price*0.1;
	}
}

int generalDiscount(int price) {

	

	if(price>600) {
		return price*0.15;
	} else {

		return 0;


	}
}
