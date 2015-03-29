#include <stdio.h>
#include <cstring>
#include <iostream>
using namespace std;
int i;
int firstVisit = -1;
int secondVisit = 1;
int graph[110][110];
int edges[110][110];
int visit[110];

int flag;

void dfs(int num){
if(num >i  || num<=0) return ;
visit[num] = firstVisit;
for(int j=1;j<=i;j++){
    if(graph[num][j] == 1 && edges[num][j] == 1){
        if(visit[j] == 0){
            edges[num][j] = -1;
            edges[j][num] = -1;
            dfs(j);
        }
        else if(visit[j] == firstVisit ){
            flag += 1;
        }
    }
}
visit[num] = secondVisit;

}

int main(){
int j,k,l;
scanf("%d %d",&i,&j);
memset(graph,0,110);
memset(edges,0,110);
memset(visit,0,110);
while(j--){

    scanf("%d %d",&k,&l);
    graph[k][l] = 1;
    graph[l][k] = 1;
    edges[k][l] = 1;
    edges[l][k] = 1;

}
flag = 0;
int comp = 0;
for(int nm = 1;nm<=i;nm++){
        if(visit[nm] == 0){
                dfs(nm);
                comp++;
        }
}

if(flag == 1 && comp == 1) printf("FHTAGN!");
else printf("NO");
return 0;}
