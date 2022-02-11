
/************************************************************************
Name: Jeevan benny								    	 Class:S3IT
Roll no: 20			                		        Date:29-11-2021
					BUBBLE SORT
************************************************************************/
#include<stdio.h>
#include<conio.h>
int main()
{
int array[100], n, i, j, swap; 
printf("Enter number of elements");
scanf("%d", &n); 
printf("Enter %d Numbers:", n); 
for(i = 0; i < n; i++)
scanf("%d", &array[i]); 
for(i = 0 ; i < n - 1; i++)
{
for(j = 0 ; j < n-i-1; j++)
{
if(array[j] > array[j+1]) 
{
swap=array[j];
array[j]=array[j+1];
array[j+1]=swap;
}
}
} 
printf("Sorted Array:"); 
for(i = 0; i < n; i++)
printf("%d ", array[i]);
return 0;
}

/*
OUTPUT:
Enter number of elements3
Enter 3 Numbers:5
4
6
Sorted Array:456
*/
