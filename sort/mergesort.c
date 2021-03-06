/* Sort an array of n integers using merge sort*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 10
#define HIGH 10000

void display(int a[])
{
	int i=0;
	printf("\n");
	for(i=0;i<MAX;i++)
		printf("%d ",a[i]);
	printf("\n");
}

int merge(int array[],int p,int q,int r)
{	
	int n1=q-p+1;
	int n2=r-q;
	int *left = (int*)malloc(sizeof(int)*(n1+1));
	int *right = (int*)malloc(sizeof(int)*(n2+1));
	int i=0,j=0,k=p;
	while(i<n1)
		left[i++]=array[p+i];
	while(j<n2)
		right[j++]=array[q+1+j];
	left[n1]=HIGH;
	right[n2]=HIGH;
	i=j=0;
	while(k<=r)
		if(left[i]<=right[j])
			array[k++]=left[i++];
		else
			array[k++]=right[j++];
}	

void mergesort(int array[],int p,int r)
{
	display(array);	
	if(p<r)
	{
		int q = (p+r)/2;
		mergesort(array,p,q);		//sort the left subarray
		mergesort(array,q+1,r);		//sort the right subarray
		merge(array,p,q,r);
	}
}

int main()
{
	int array[MAX]={9,8,7,6,5,4,3,2,1,0};
	mergesort(array,0,MAX-1);
	display(array);
	return;
}
