/*
Problem statement:

Given an array of even and odd numbers(unsorted)
- Shift all the odd numbers in the array to the left and replace all the even numbers by zero (shifted to the right end)
- Maintain order
- Do not use more than one loop for computation
- Do no use more than two variables inside the loop

Error fix & optimization credits: Gautham (https://github.com/Gautham)

Example:

I/P: 1 2 3 4 5 6 7 8 9 10
O/P: 1 3 5 7 9 0 0 0 0 0 

*/

#include<stdio.h>
#define MAX 5

int main()
{
	int array[MAX],i=0;	

	/*	Input	*/

	for(i=0;i<MAX;i++)
		scanf("%d",&array[i]);

	/* The two variables: head -> earliest 0 in the array	tail -> last 0 in the array*/
	int head=0;

	/*	Computation	*/

	for(i=0;i<MAX;i++)
	{
		if(array[i]%2)
		{
			array[head]=array[i];
			if( head != i)
				array[i]=0;
			head++; 
		}
		else
			array[i]=0;
	}

	/*	Output	*/
	
	for(i=0;i<MAX;i++)
		printf("%d ",array[i]);
	return 1;
}
			
