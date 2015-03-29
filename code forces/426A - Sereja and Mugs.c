#include <stdio.h>

int main (){
int x,y,i,j,l,k;
scanf ("%d %d",&x,&y);
int arr[x] ;
int temp,min;
int sum =0;
for(i=0;i<x;i++){
scanf("%d",&arr[i]);
}
for(i=0;i<x-1;i++){
        min = i;
    for(j=i+1;j<x;j++){
        if(arr[j]<arr[min])
            min = j;
    }
    sum+=arr[min];
    if(sum>y){
        printf("NO\n");
        return 0;
    }
    temp = arr[min];
    arr[min] = arr[i];
    arr[i]=temp;
}

printf("YES\n");
return 0;

}