typedef struct Date{
	int date;
	int month;
	int year;
}Date;
void store(Date* );
void display(Date* );
void main(){
	struct Date d;
	store(&d);
	display(&d);
	
}

void store(Date* d){
	printf("Enter date detail:\n");
	printf("Enter date:");
	scanf("%d",&d->date);
	printf("Enter month:");
	scanf("%d",&d->month);
	printf("Enter year:");
	scanf("%d",&d->year);
}

void display(Date* d){
	printf("***Display Date detail***\n");
	printf("date=%d month=%d yera=%d\n",d->date,d->month,d->year);
}
	
	
	
	