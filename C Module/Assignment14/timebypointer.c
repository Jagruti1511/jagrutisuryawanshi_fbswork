typedef struct Time{
	int hour;
	int min;
	int sec;
}Time;
void store(Time* t);
void display(Time* t);
void main(){
	struct Time t;
	store(&t);
	display(&t);
}
void store(Time* t){
	printf("Enter Time details:\n");
	printf("Enter hour:");
	scanf("%d",&t->hour);
	printf("Enter min:");
	scanf("%d",&t->min);
	printf("Enter sec:");
	scanf("%d",&t->sec);
}
	void display(Time* t){
		printf("Display Time detail:");
	printf("hour=%d min=%d sec=%d \n",t->hour,t->min,t->sec);
	}
	
	