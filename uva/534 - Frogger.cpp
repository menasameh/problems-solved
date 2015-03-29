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



typedef struct eee{
int y;
int x;
} state;


typedef struct e{
int from;
int to;
double w;
bool used = false;
} edge;

bool edgeSort(edge s,edge e){
return s.w<e.w;
}

int ec;
double cc=0;
state points[500];
int parents[1000000];
edge edges[100000];
bool visit[500];
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

void dfs(int curr,double cost){
visit[curr] = true;
    if (curr == 1){
        cc = cost;
        return ;
    }
    for(int i=0;i<ec;i++){
        if (edges[i].used && edges[i].from == curr && !visit[edges[i].to]){
            dfs(edges[i].to,max(cost,edges[i].w));
        }
    }
}

void findInverse(int from, int to){
    for(int i = 0;i<ec;i++){
        if(edges[i].from == to && edges[i].to == from){
            edges[i].used = true;
            return;
        }
    }
}

void kruskal(int n){
init(n);
sort(edges,edges+ec,edgeSort);
int cnt=0;
for(int i = 0;i<ec && cnt!= n-1;i++){
    if(uni(edges[i].from, edges[i].to)){
        edges[i].used = true;
        findInverse(edges[i].from, edges[i].to);
        cnt++;
    }
}
dfs(0,-1);
}

double getW(int i,int j){
int i_x = points[i].x;
int i_y = points[i].y;
int j_x = points[j].x;
int j_y = points[j].y;
double ans = sqrt(pow(i_x - j_x,2)+pow(i_y - j_y,2));
return ans;
}

int main(){
    int i,j,k,l,n;
    int x,y;
int cases = 1;
    while(1){
        scanf("%d",&i);
        if (!i) return 0;
        for(int d=0;d<i;d++){
            scanf("%d %d",&x,&y);
            points[d].x = x;
            points[d].y = y;
        }
        ec =0;
        for(int d=0;d<i;d++){
            for(int w=d+1;w<i;w++){
                    edges[ec].from = d;
                    edges[ec].to = w;
                    edges[ec].w = getW(d,w);
                    edges[ec].used = false;
                    edges[ec+1].from = w;
                    edges[ec+1].to = d;
                    edges[ec+1].w =  edges[ec].w;
                    edges[ec+1].used = false;
                    ec+=2;
        }
        }
        memset(visit,false,sizeof(visit));
        kruskal(i);
        printf("Scenario #%d\nFrog Distance = %.3f\n\n",cases,cc);
        cases++;
        scanf("\n");
    }

return 0;}
