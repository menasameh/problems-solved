#include <stdio.h>
int main(){
int T;
scanf("%d",&T);
int z,x,y;
int c;
while(T--){
scanf("%d %d %d",&z,&x,&y);
int arr[z];
for(c=0;c<z;c++){
    scanf("%d",&arr[c]);
}
if(arr[0] == x && arr[z-1] == y){
    printf("BOTH\n");
}
if(arr[0] == x && arr[z-1] != y){
    printf("EASY\n");
}
if(arr[0] != x && arr[z-1] == y){
    printf("HARD\n");
}
if(arr[0] != x && arr[z-1] != y){
    printf("OKAY\n");
}
}
return 0;
}