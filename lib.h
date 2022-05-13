#include <stdio.h>
int powR(unsigned long int a,unsigned long int b)
{
    long int i,c=a;
    for (i=1;i<b;i++)
    {
        a*=c;
    }
    
    return a;
}

int fact(unsigned long int a)
{
    long int i,b=1;
    for(i=1;i<=a;i++)
    {
        b*=i;
    }


    return b;
}