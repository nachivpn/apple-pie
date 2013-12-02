/*
Insertion sort for an integer array
Displays the state of the array in every iteration
*/
#include<stdio.h>

#define MAX 10

int a[MAX]={2,5,3,4,9,8,2,6,7,1};

void display(char c)
{
	int i;
	if(c == 'i')
		printf("\n\t");
	else
		printf("\n");
	for(i=0;i<MAX;i++)
			printf("%d ",a[i]);
}

void isort()
{
	int i,j,key;
	for(i=1;i<MAX;i++)
	{
		key=a[i];
		for(j=i-1;j>=0 && a[j]>key;j--)
		{
			a[j+1]=a[j];
			display('i');
		}
		a[j+1]=key;
		display('o');
	}
}

int main()
{
	isort(a);
	printf("\n");
	return;
}
