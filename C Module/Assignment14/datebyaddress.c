typedef struct Date{
	int date;
	int month;
	int year;
}Date;
void storeDate(Date* ,int );
void display(Date* ,int );
void main(){
	struct Date d[2];
     store(d,2);
     display(d,2);
}
 void store(Date* d,int size){
 	for(int i=0;i<size;i++){
    printf("Enter date:");
	scanf("%d",&d[i].date);
	printf("Enter month:");
	scanf("%d",&d[i].month);
	printf("Enter year:");
	scanf("%d",&d[i].year);
	 }

	
}
void display(Date* d,int size){
	printf("***Display Date detail***\n");
	for(int i=0;i<size;i++){
	
	printf("date=%d month=%d yera=%d\n",d[i].date,d[i].month,d[i].year);
}
	}
		


