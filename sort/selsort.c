/*
	Selection sort algorithm to an array on n integers
	Loop invariant: a[0...i] 
		-> sorted
		-> has elements[1st smallest element, 2nd smallest element......i'th smallest element] for a
*/
#include<stdio.h>
#define MAX 10
int a[MAX] = {1,3,2,5,4,7,6,9,8,0};

void selsort()
{
	int i,j,minpos,temp;
	for(i=0;i<MAX-1;i++)			/* n-1 iterations would do the job.. */
	{					/*....because the loop invariant gaurantees... */
		minpos=i;		 	/*....that the nth element after n-1 iterations is the greatest element */ 
		for(j=i;j<MAX;j++)
			if(a[j]<a[minpos])
				minpos=j;
		temp=a[minpos];
		a[minpos]=a[i];
		a[i]=temp;
	}
}

void display()
{
	int i=0;
	printf("\n");
	for(i=0;i<MAX;i++)
		printf("%d ",a[i]);
	printf("\n");
}

int main()
{
	printf("Before sorting:");
	display();	
	selsort();
	printf("After sorting:");
	display();
	return;
}
