#include<stdio.h>
void main()
{
	int s1,s2;
	printf("Enter the size of array1:\n");
	scanf("%d",&s1);
	printf("Enter the size of array2:\n");
	scanf("%d",&s2);
	int arr1[s1],arr2[s2];
	//int s3=s1>s2?s1:s2;
//	if(s1>s2)
//	   s3=s1;
//	else
//	   s3=s2;
//	int arr3[s3];
    int max=s1>s2?s1:s2;
    int min=s1<s2?s1:s2;
    int arr3[max];

	printf("Enter array1:");
	for(int i=0;i<s1;i++)
		scanf("%d",&arr1[i]);
	
    printf("Enter array2:");
	for(int i=0;i<s2;i++)
		scanf("%d",&arr2[i]);
		
		
	for(int i=0;i<s1;i++)
		printf("%d ",arr1[i]);
	printf("\n");
	
	for(int i=0;i<s2;i++)
		printf("%d ",arr2[i]);
	printf("\n");
	
	
//	for(int i=0;i<s1;i++)
//	arr3[i]=arr1[i];
//	
//	for(int i=0;i<s2;i++)
//	arr3[s1++]=arr2[i];


	/////////////////////////
	  //s1=10,  s2=5,  s3=10
	  
	  for(int i=0;i<min;i++){
	  	arr3[i]=arr1[i]+arr2[i];
	  }
	  
	  for(int i=min;i<=max;i++){
	  	if(s1>s2)
	  	arr3[i]=arr1[i];
	  	else
	  	arr3[i]=arr2[i];
	  }
	  
	
	
	/////////////////////////
//		printf("\n");
//	for(int i=0;i<s3;i++)
//		printf("%d ",arr3[i]);


	printf("\n");
	for(int i=0;i<max;i++)
		printf("%d ",arr3[i]);
}                
