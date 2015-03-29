#include <iostream>
#include <cstdlib>
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
#include <iostream>


using namespace std;



typedef struct e{
int from;
int to;
double w;
} edge;

bool edgeSort(edge s,edge k){
return s.w<k.w;
}

int ec;
double cc=0;
int parents[1000000];
edge edges[100000];
int toP[50000];
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

void kruskal(int n){
init(n);
int counter=0;
sort(edges,edges+ec,edgeSort);
for(int i = 0;i<ec;i++){
    if(uni(edges[i].from, edges[i].to)){
    }
    else{
                toP[counter] = edges[i].w;
                counter++;
    }
}
if(counter == 0) {
    printf("forest\n");
    return ;
}

    printf("%d", toP[0]);
            for (int i=1 ; i<counter ; i++)
                printf(" %d", toP[i]);
        printf("\n");

}
int main(){
    int i,j,k,l,n;
    int x,y;
    while(1){
        scanf("%d %d",&x,&ec);
        if (!x && !ec) return 0;
        for(int d=0;d<ec;d++){
            scanf("%d %d %d",&k,&l,&n);
                    edges[d].from = k;
                    edges[d].to = l;
                    edges[d].w = n;
        }
        kruskal(x);
    }

return 0;}
