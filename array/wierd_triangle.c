/*Given an input of a number n, program should output:

1
k-1 2
k-2 k-3 3
k-4 k-5 k-6 4
..............n

(where k=n+(n-1)+(n-2)+......+1)

Example: 

IP: 4
OP:
1
10 2
9 8 3
7 6 5 4

*/



#include <stdio.h>
#include <string.h>

main()
{
   int num;
   scanf("%d",&num);
   int i,j,k,sum=0;
   for(k=num;k>0;k--)
        sum+=k;
    printf("%d\n",sum);
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i-1;j++)
        {
            printf("%d ",sum--);
        }
        printf("%d\n",i);
    }
     
}
