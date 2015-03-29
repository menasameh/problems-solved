
#include <stdio.h>
long long mem[51];
long long foo(long long i){
if(i == 1)
    return 1;
if(i == 2){
    return 2;
}
if(mem[i] != -1)
    return mem[i];
mem[i] = foo(i-1) + foo(i-2);
return mem[i];

}

int main(){
int j;
for(j=0;j<51;j++)
    mem[j] = -1;
long long i;
while(1){
scanf("%lli",&i);
if(i == 0){
return 0;
}
printf("%lli\n",foo(i));
}
}
