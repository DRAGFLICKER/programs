/************************************************************************
Name: Jeevan benny								    	 Class:S3IT
Roll no: 20			                		        Date:6-12-2021
					INSERTION SORT
************************************************************************/
#include <stdio.h>
int main()
{
    int n, i, j, temp;
    int arr[64];
 
    printf("Enter number of elements\n");
    scanf("%d", &n);
 
    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 1 ; i <= n - 1; i++)
    {
	    j = i;
            while ( j > 0 && arr[j-1] > arr[j])
            {	        
                temp     = arr[j];
                arr[j]   = arr[j-1];
                arr[j-1] = temp;
                j--;
            }
    }
    printf("Sorted list in ascending order:\n");
    for (i = 0; i <= n - 1; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
/*
OUTPUT:
Enter number of elements
5
Enter 5 integers
6
4
2
8
6
Sorted list in ascending order:
2
4
6
6
8
*/
