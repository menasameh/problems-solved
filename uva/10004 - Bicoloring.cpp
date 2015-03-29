#include <stdio.h>
#include <cstring>
#include <iostream>
using namespace std;
int i;
const int MAX = 210;
int graph[MAX][MAX];
int visit[MAX];

int flag;

void dfs(int num , int f){
if(num >=i  || num<0) return ;
visit[num] = f;
for(int j=0;j<i;j++){
    if(graph[num][j] == 1){
        if(visit[j] == 0){
            dfs(j,-1 * f);
            if (flag) return ;
        }
        else if(visit[j] == f ){
            flag = 1;
           return ;
        }
    }
}
}

int main(){
int j,k,l;
while(1){
    scanf("%d",&i);
    if(i == 0) return 0;
    scanf("%d",&j);
    for(int kk = 0;kk<MAX;kk++){
    memset(graph[kk],0,MAX);
    }
    memset(visit,0,MAX);
    while(j--){
    scanf("%d %d",&k,&l);
    graph[k][l] = 1;
    graph[l][k] = 1;
    }
    flag = 0;
    dfs(0,1);
    if(flag == 1) printf("NOT BICOLORABLE.\n");
    else printf("BICOLORABLE.\n");
}
return 0;}
