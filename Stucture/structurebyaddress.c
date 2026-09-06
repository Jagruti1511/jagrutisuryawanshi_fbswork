#include<stdio.h>
typedef struct Student{
	int rollno;
	char name[20];
	int marks;
}Student;
void display(Student* arr,int size);
void storeArray(Student* arr,int size);
void main(){
	//Student s1,s2,s3,s4,s5
	Student arr[5];
	printf("Enter student details");
	storeArray(arr,5);
	
	
	printf("Students are:");
	storeArray(arr,5);
	display(arr,5);	
	
		}	
		void display(Student* arr,int size){
				for(int i=0;i<5;i++){
			printf("Rollno=%d",&arr[i].rollno);
			printf("Name=%s",arr[i].name);
			printf("Marks=%s",&arr[i].marks);
		}
		void storeArray(Student* arr,int size){
			for(int i=0;i<5;i++){
		scanf("%d",&arr[i].rollno);
		scanf("%s",arr[i].name);
		scanf("%d",&arr[i].marks);
	}
		}
		}