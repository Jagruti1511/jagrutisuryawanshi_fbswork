typedef struct Date{
	int date;
	int month;
	int year;
}Date;
Date storeDate();
void display(Date );
void main(){
	struct Date d;
	d=storeDate();
	display(d);
}
 Date storeDate(){
	Date temp;
	printf("Enter Date Detail:");
	scanf("%d%d%d",&temp.date,&temp.month,&temp.year);
	return temp;
}
void display(Date d){
	printf("***Display Date:***\n");
	printf("date=%d month=%d year=%d",d.date,d.month,d.year);
}