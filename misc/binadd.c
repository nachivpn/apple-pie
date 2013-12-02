/* Adding two n-bit binary numbers */

#include<stdio.h>
#define MAX 3
int binadd(int a,int b)
{
	if(a==1 && b==1)
		return 10;
	else
		return a+b;
}

int main()
{
	int an,bn,a[MAX],b[MAX],c[MAX+1],sum;
	int i=MAX-1,carry=0;
	printf("Enter two binary %d bit integers\n",MAX);
	scanf("%d",&an);
	scanf("%d",&bn);
	while(an!=0 && bn!=0 && i>=0)
	{
		a[i]=an%10;
		b[i]=bn%10;
		an/=10;
		bn/=10;
		i--;
	}
	i=MAX-1;
	while(i>=0)
	{
		sum = binadd(a[i],b[i]);
		c[i+1] = sum%10+carry;		
		carry = sum/10;
		i--;
	}
	c[++i] = carry;
	printf("\nsum = ");
	while(i<=MAX)
		printf("%d",c[i++]);
	return;
}
