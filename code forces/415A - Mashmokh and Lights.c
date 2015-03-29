#include <stdio.h>
#include <string.h>
int main()
{
    int x,y,z,i,j;
    scanf("%d %d",&x,&y);
    int arr[y] ;
    int lights[x];
    memset(lights,0,x*4);
    for (z=0;z<y;z++)
    {
        scanf("%d",&arr[z]);
    }
    for (z=0;z<y;z++)
    {
for (i=arr[z]-1;i<x;i++)
    {
        if (!lights[i])
        {

            lights[i] = arr[z];
        }

    }

    }
    for (z=0;z<x;z++)
    {
        printf("%d ",lights[z]);
    }
    return 0;
}