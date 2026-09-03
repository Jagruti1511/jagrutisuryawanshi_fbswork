typedef struct Date{
	int date;
	int month;
	int year;
}Date;
void main(){
	struct Date d;

	
	printf("Enter date:");
	scanf("%d",&d.date);
	printf("Enter month:");
	scanf("%d",&d.month);
	printf("Enter year:");
	scanf("%d",&d.year);
	
	printf("***Display Date detail***\n");
	printf("date=%d month=%d yera=%d\n",d.date,d.month,d.year);
	
}
