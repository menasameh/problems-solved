#include <stdio.h>
int main(){
int T;
scanf("%d",&T);
int z,x,y;
int c;
while(T--){
scanf("%d %d",&z,&x);
int sum =0;
for(c=0;c<z;c++){
    scanf("%d",&y);
    sum+=y/x;
}
printf("%d\n",sum);
}
return 0;
}