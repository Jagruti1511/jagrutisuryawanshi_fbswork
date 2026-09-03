typedef struct Time{
	int hour;
	int min;
	int sec;
}Time;
void store(Time* t,int size);
void display(Time* t,int size);
void main(){
	struct Time t[4];
	store(t,4);
	display(t,4);
}
void store(Time* t,int size){
		printf("Enter Time details:\n");
		for(int i=0;i<size;i++){
    printf("Enter hour:");
	scanf("%d",&t[i].hour);
	printf("Enter min:");
	scanf("%d",&t[i].min);
	printf("Enter sec:");
	scanf("%d",&t[i].sec);
		}
}
void display(Time* t,int size){
	for(int i=0;i<size;i++){
	printf("Display Time detail:");
	printf("hour=%d min=%d sec=%d \n",t[i].hour,t[i].min,t[i].sec);
	}
}


	
	
