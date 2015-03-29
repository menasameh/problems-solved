#include <stdio.h>
#include <string.h>
int main ()
{
   int x,u,y,h,i,k;

   scanf("%d",&x);
   int arr[x];
    for(y=0;y<x;y++)
    {
        scanf("%d",&arr[y]);
    }
    for (y=0;y<x;y++)
    {
        int m = y;
        k = y;
        for (i=y;i<x;i++)
        {
            if (arr[i] < arr[k])
            {
                k = i;
            }

        }
        h = arr[k];
        arr[k] = arr[m];
        arr[m] = h;

    }
for(y=0;y<x;y++)
    {
        printf("%d ",arr[y]);
    }
    return 0;
}