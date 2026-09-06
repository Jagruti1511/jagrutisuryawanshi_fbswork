#include<stdio.h>
typedef struct Time{
	int hr,min,sec;
}Time;
struct Time store();
void display(struct Time );
struct Time formatTime(struct Time t1);
void main(){
	struct Time t1,t2,t3; //t2 t3 la part yevda sagla krav lagel mhanun tyasathi functions cha use kraycha

     t1=store();
     
     display(t1);
     
     t1=formatTime(t1);
   
     //printf("%d-%d-%d",t1.hr,t1.min,t1.sec);//display ghetlyamule yachi garaj nahi
     
     display(t1);
     
      t2=store();
     
     display(t2);
     
     t2=formatTime(t2);
     display(t2);
}
struct Time formatTime(struct Time t1){
	  int tsec=t1.hr*3600+t1.min*60+t1.sec;
     
     t1.hr=tsec/3600;
     t1.min=tsec%3600;
     t1.sec=t1.min%60;
     t1.min=t1.min/60;
     
     return t1;
}
void display(struct Time t1){
printf(" %d - %d - %d \n" ,t1.hr,t1.min,t1.sec);	
}
struct Time store(){
	struct Time t1;
		printf("Enter hr min and sec");
	scanf("%d%d%d",&t1.hr,&t1.min,&t1.sec);
	return t1;
}