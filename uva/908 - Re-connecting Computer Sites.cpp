#include <cstring>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include <list>
#include <climits>
#include <cctype>
#include <bitset>
#include <string>
using namespace std;

typedef struct e{
int from;
int to;
int w;
} edge;

bool edgeSort(edge s,edge e){
return s.w<e.w;
}

int ec;
int parents[1000000];
edge edges[100000000];
void init(int n){
for(int x=0;x<n;x++){
    parents[x] = x;
}
}

int f(int u){
if(parents[u] == u) return u;
return parents[u] = f(parents[u]);
}

bool uni(int u,int v){
int r_u = f(u);
int r_v = f(v);
if(r_u == r_v)  return false;
parents[r_u]= r_v;
return true;
}

int kruskal(int n){
    int cost=0;
init(n);
sort(edges,edges+ec,edgeSort);
int cnt=0;
for(int i = 0;i<ec && cnt!= n-1;i++){
    if(uni(edges[i].from, edges[i].to)){
        cost+= edges[i].w;
        cnt++;
    }
}
return cost;
}

int main(){
    int x,i,h,j,k,l,n;
    int ntest = 0;
    while(scanf("%d",&n) == 1){
        ntest++;
    if (ntest>1)  printf("\n");
        int oldSum = 0;
        for(int d=0;d<n-1;d++){
            scanf("%d %d %d",&i,&j,&k);
            oldSum +=k;
        }
        scanf("%d",&i);
        ec = i;
        for(int d=0;d<ec;d++){
            scanf("%d %d %d",&i,&j,&k);
            edges[d].from = i;
            edges[d].to = j;
            edges[d].w = k;
        }
        int lv = ec;
        scanf("%d",&i);
        int bb = i;
        ec += i;
        for(int d=0;d<bb;d++){
            scanf("%d %d %d",&i,&j,&k);
            edges[lv+d].from = i;
            edges[lv+d].to = j;
            edges[lv+d].w = k;
        }
        int newSum = kruskal(n);
        printf("%d\n%d\n",oldSum,newSum);
    }

return 0;}
