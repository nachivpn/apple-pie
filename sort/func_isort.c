#include <stdio.h>
#include <string.h>
#define MAX 5
int a[MAX]={2,1,3,5,4};

void isort(int keypos)
{
    if(keypos>=1)
    {
        isort(keypos-1);
        int i=keypos-1;
        int key=a[keypos];
        while(i>=0 && a[i]>key)
        {
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=key;
    }
}
main()
{
    isort(MAX-1);
    int i=0;
    while(i<MAX)
        printf("%d ",a[i++]);
    return;
}