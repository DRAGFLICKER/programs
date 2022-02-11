/************************************************************************
Name: Jeevan benny								    	 Class:S3IT
Roll no: 20			                		        Date:29-11-2021
					SELECTION SORT
************************************************************************/
#include <stdio.h>
#include<conio.h>
main ()
{
	int a,i,pos=-1,temp,j;
	printf("enter the size of arry:\n");
	scanf("%d",&a);
	int arr[a];
	printf("enter the element of arry:\n");
	for(i=0;i<a;i++)
	{ 
		scanf("%d",&arr[i]);
	}
	for(i=0;i<a-1;i++)
	{
			pos=i;
			for(j=i+1;j<a;j++)
			{
				if(arr[pos]>arr[j])
					pos=j; 
			}
			if(pos!=i)
			{
				temp=arr[i];
				arr[i]=arr[pos];
				arr[pos]=temp;
			}
	}
	printf("the sorted array \n");
	for(i=0;i<a;i++)
		printf("%d ",arr[i]);
	getch();	
}
/*
enter the size of arry:
5
enter the element of arry:
6
4
2
8
1
the sorted array
1 2 4 6 8
*/
