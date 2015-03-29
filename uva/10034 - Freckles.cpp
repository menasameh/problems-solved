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
double from;
double to;
double w;
} edge;

bool edgeSort(edge s,edge e){
return s.w<e.w;
}

int ec;
state points[501];
int parents[1000000];
edge edges[100000];
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

double kruskal(int n){
double cost=0;
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

double getW(int i,int j){
double i_x = points[i].x;
double i_y = points[i].y;
double j_x = points[j].x;
double j_y = points[j].y;
double ans = sqrt(pow(i_x - j_x,2)+pow(i_y - j_y,2));
return ans;
}

int main(){
    int i,j,k,l,n;
    double x,y;
    scanf("%d",&n);
int cases = 0;
    while(n--){
            scanf("\n");
            cases++;
    if(cases>1) printf("\n");
        scanf("%d",&i);
        for(int d=0;d<i;d++){
            scanf("%lf %lf",&x,&y);
            points[d].x = x;
            points[d].y = y;
        }
        ec =0;
        for(int d=0;d<i;d++){
            for(int w=d+1;w<i;w++){
                    edges[ec].from = d;
                    edges[ec].to = w;
                    edges[ec].w = getW(d,w);
                    edges[ec+1].from = w;
                    edges[ec+1].to = d;
                    edges[ec+1].w =  edges[ec].w;
                    ec+=2;
        }
        }
        double newSum = kruskal(i);
        printf("%.2f\n",newSum);
    }

return 0;}
