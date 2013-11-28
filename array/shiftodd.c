/*
Problem statement:

Given an array of even and odd numbers(unsorted)
- Shift all the odd numbers in the array to the left and replace all the even numbers by zero (shifted to the right end)
- Maintain order
- Do not use more than one loop for computation
- Do no use more than two variables inside the loop

Example:

I/P: 1 2 3 4 5 6 7 8 9 10
O/P: 1 3 5 7 9 0 0 0 0 0 

*/

#include<stdio.h>
#define MAX 10
int iseven(int n)
{
	return n%2;
}

int main()
{
	int array[MAX],i=0;	

	/*	Input	*/

	for(i=0;i<MAX;i++)
		scanf("%d",&array[i]);

	/* The two variables: head -> earliest 0 in the array	tail -> last 0 in the array*/
	int head=-1,tail=-1;

	/*	Computation	*/

	for(i=0;i<MAX;i++)
	{
		if(iseven(array[i])==0)
		{
			/* Replace all even number by 0 */
			array[i]=0;	
			if(head == -1)
				head = tail = i;
			else 
				tail = i; 
		}
		else
		{
			if(head!=-1)
			{
				/* Push odd number to the left (Exchange with the earliest 0) */
				array[head] = array[head]+array[i];	
				array[i]= array[head] - array[i];
				array[head] = array[head] - array[i];
				if(head<tail)
					head++;
				else if(head==tail)
					head=tail=i;
			}
		}
	}

	/*	Output	*/
	
	for(i=0;i<MAX;i++)
		printf("%d ",array[i]);
	return 1;
}
			
