/************************************************************************
Name: Jeevan benny								    	 Class:S3IT
Roll no: 20			                		        Date:13-12 -2021
					MERGE SORT
************************************************************************/
#include <stdio.h>

int b[10];

void merging(int a[],int low, int mid, int high) {
   int l1, l2, i;
   for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
      if(a[l1] <= a[l2])
         b[i] = a[l1++];
      else
         b[i] = a[l2++];
   }
   
   while(l1 <= mid)    
      b[i++] = a[l1++];

   while(l2 <= high)   
      b[i++] = a[l2++];

   for(i = low; i <= high; i++)
      a[i] = b[i];
}

void sort(int a[],int low, int high) 
{
   int mid;
   
   if(low < high) {
      mid = (low + high) / 2;
      sort(a,low, mid);
      sort(a,mid+1, high);
      merging(a,low, mid, high);
   } else { 
      return;
   }   
}

int main() { 

    int i, count, a[25];

   printf("How many elements are u going to enter?: ");
   scanf("%d",&count);

   printf("Enter %d elements: ", count);
   for(i=0;i<count;i++)
      scanf("%d",&a[i]);

   printf("List before sorting\n");
   
   for(i = 0; i < count; i++)
      printf("%d ", a[i]);

   sort(a,0,count-1);

   printf("\nList after sorting\n");
   
   for(i = 0; i < count; i++)
      printf("%d ", a[i]);
}

/*output:
How many elements are u going to enter?: 4
Enter 4 elements: 3
5
8
2
List before sorting
3 5 8 2
List after sorting
2 3 5 8
*/

