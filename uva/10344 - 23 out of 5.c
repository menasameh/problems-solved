#include <stdio.h>
int arr[5];
int selected[5];
int isSelected[5];
int ans[4];
int flag;

int foo(int i){
int j;
if(i == 4){
    int a=selected[0];
    for(j=0;j<4;j++){
        if(ans[j] == 0){
            a+=selected[j+1];
        }
        else if(ans[j] == 1){
            a-=selected[j+1];
        }
        else if(ans[j] == 2){
            a*=selected[j+1];
        }
    }
    if(a == 23){
        flag = 1;
    }
    return ;
}
for(j=0;j<3;j++){
    ans[i] = j;
    if (flag) {return ;}
    foo(i+1);
    if (flag) {return ;}
    ans[i] =0;
}
}
int select(int i){
int j;
if(i == 5){
foo(0);
return ;
}
for(j=0;j<5;j++){
    if(flag){
        return;
    }
    if(!isSelected[j]){
        isSelected[j] = 1;
        selected[i] = arr[j];
        select(i+1);
        isSelected[j] = 0;
    }
}


}
int main(){
int i,j,k,l,h;
while(1){
        flag =0;

for(h=0;h<5;h++){
    isSelected[h] = 0;
}

for(i=0;i<5;i++){
    scanf("%d",&arr[i]);
}
if(arr[0] == 0 && arr[1] == 0 && arr[2] == 0 && arr[3] == 0 &&arr[4] == 0){
    return 0;
}

select(0);
if(flag){
    printf("Possible\n");
}
else{
    printf("Impossible\n");
}
}
return 0;
}
