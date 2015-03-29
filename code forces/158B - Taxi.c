#include <stdio.h>
int main()
{
    int q=0,w=0,e=0,r=0,x,y,i,h,sum=0;
    scanf("%d",&x);
    for(y=0;y<x;y++)
    {
        scanf("%d",&i);
        switch(i)
        {
            case 1 :q++;break;
            case 2 :w++;break;
            case 3 :e++;break;
            case 4 :r++;break;
        }
    }
    sum=r;
    if(e>=q)
    {
        sum+=e;
        q=0;
    }
    else
    {
        sum+=e;
        q-=e;
    }
    if(w%2==0)
    {
        sum+=w/2;
        if(q>0)
        {
            sum+=ceil(q/4.0);
            q=0;
        }
    }
    else
    {
        sum+=w/2;
        if(w%2>q/2)
        {
            sum+=w%2-q/2;
            q=0;
        }
        else if (w%2==q/2)
        {
            sum+=w%2;
            q=0;
        }
        else
        {
           sum+=(w%2);
           q-=2*(w%2);
        }
    }
    if(q>0)
        sum+=ceil(q/4.0);

printf("%d",sum);
    return 0;
}