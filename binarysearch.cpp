#include<stdio.h>
#include<conio.h>
#include<process.h>
int array[20],n,i,j;

void display()
 {
 	for(i=0;i<n;i++)
 	 {
 	 	printf("%d ",array[i]);
 	 }
 } 
 
void bsort()
 {
 	int t;
 	for(i=0;i<n;i++)
 	 {
 	 	for(j=0;j<n-i-1;j++)
 	 	 {
 	 	 	if(array[j]>array[j+1])
 	 	 	 {
 	 	 	 	t=array[j];
 	 	 	 	array[j]=array[j+1];
 	 	 	 	array[j+1]=t;
 	 	 	 }
 	 	 }
 	 }
 	printf("\nArray after Sorting:\n");
	display();  
 } 
 
void bsearch()
 {
 	int beg,end,mid,num,f=0;
 	beg=0;
 	end=n-1;
 	printf("\nEnter number to be searched:");
 	scanf("%d",&num);
 	if(array[beg]==num)
 	 {
 	  printf("Number found at position %d",beg+1);
 	  f=1;
     }
 	else if(array[end]==num)
	 {
	  printf("Number found at position %d",end+1);
	  f=1;
     }
	else
	 {
	 	while(beg<=end)
	 	 {
	 	 	mid=(beg+end)/2;
	 	 	if(array[mid]==num)
	 	 	 {
	 	 	   printf("Number found at position %d",mid+1);
	 	 	   f=1;
	 	 	   break;
	 	      }
	 	 	else if(array[mid]>num)
			  end=mid-1;
			else
			  beg=mid+1;   
	 	 }
	 }
	if(f==0)
	 printf("\nNumber not found.");   
 } 
 
 
main()
 {
 	int opt,pos,num;
 	printf("Enter size of array:");
 	scanf("%d",&n);
 	printf("Enter elements of array:");
 	for(i=0;i<n;i++)
 	 {
 	 	scanf("%d",&array[i]);
 	 }
 	bsort(); 
 	bsearch();
 }
