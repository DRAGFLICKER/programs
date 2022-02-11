 /************************************************************************
Name: Jeevan benny										   Class:S3IT
Roll no: 20												   Date:29-11-2021
					BINARY SEARCH
************************************************************************/

#include<stdio.h>
#include<conio.h>
main()
{
	int i, low,high,mid,n,key,A[100];
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the elements of the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("enter the element searched for");
	scanf("%d",&key);
		low=0;
		high=n-1;
		mid=(low+high)/2;
	while(low<=high)
	{ 
		if(A[mid]==key)
		{
	    printf("\n %d is found at location %d",key,mid+1);
	    break;
		}
		else if(A[mid]<key)
		low=mid+1;
		else
			high=mid-1;
			mid=(low+high)/2;
	}
if(low>high)
	{
    printf("\n element is not found");
}	

}
/*
OUTPUT:
enter the size of array3
enter the elements of the array2
6
4
enter the element searched for6

 6 is found at location 2
---------------------------*/
