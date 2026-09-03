typedef struct Time{
	int hour;
	int min;
	int sec;
}Time;
void main(){
	struct Time t;
	printf("Enter Time details:\n");
	printf("Enter hour:");
	scanf("%d",&t.hour);
	printf("Enter min:");
	scanf("%d",&t.min);
	printf("Enter sec:");
	scanf("%d",&t.sec);
	
	printf("Display Time detail:");
	printf("hour=%d min=%d sec=%d \n",t.hour,t.min,t.sec);
}