/************************************************************************
Name: Jeevan benny								    	 Class:S3IT
Roll no: 20			                		        Date:29-11-2021
					LINEAR SEARCH
************************************************************************/

#include<stdio.h>
int main()
{
int a[20],i,s,n;
printf("enter how many elements\n");
scanf("%d", &n);
printf("enter the elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter element to search");
scanf("%d",&s);
for(i=0;i<n;i++)
if(a[i]==s)
break;
if(i<n)
printf("element found at index %d",i+1);
else
printf("element not found");
return 0;
}
/*
OUTPUT:
enter the size of array3
enter the element in the array2
4
6
enter the element to be searched for2
the element is found at 1
*/
