typedef struct Time{
	int hour;
	int min;
	int sec;
}Time;
Time storeTime();
void display(Time t);
void main(){
	struct Time t;
	t=storeTime();
	display(t);
}
Time storeTime(){
	Time temp;
	printf("Enter Time details:");
	scanf("%d%d%d",&temp.hour,&temp.min,&temp.sec);
	return temp;
}
void display(Time t){
	printf("Display Time detail:");
	printf("hour=%d min=%d sec=%d \n",t.hour,t.min,t.sec);
}