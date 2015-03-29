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
int z;
int x;
int c;
int v;
} state;


typedef struct e{
int from;
int to;
int w;
} edge;

bool edgeSort(edge s,edge e){
return s.w<e.w;
}

int ec;
state nums[501];
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
int flag = 1;
for(int i = 0;i<ec && cnt!= n-1;i++){
    if(edges[i].from ==0 || edges[i].to==0  && !flag) continue;
    if(uni(edges[i].from, edges[i].to)){
        cost+= edges[i].w;
        cnt++;
        if(edges[i].from ==0 || edges[i].to==0) flag = 0;
    }
}
return cost;
}

int getW(int i,int j){

int zz = abs(nums[i].z - nums[j].z);
int xx = abs(nums[i].x - nums[j].x);
int cc = abs(nums[i].c - nums[j].c);
int vv = abs(nums[i].v - nums[j].v);
return min(zz,10-zz)+min(xx,10-xx)+min(cc,10-cc)+min(vv,10-vv);
}

int main(){
    int x,i,h,j,k,l,n;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&i);
        nums[0].z = 0;
        nums[0].x = 0;
        nums[0].c = 0;
        nums[0].v = 0;
        for(int d=1;d<=i;d++){
            scanf("%d",&h);
            int t = h%10;
            h/=10;
            nums[d].z = t;
            t = h%10;
            h/=10;
            nums[d].x = t;
            t = h%10;
            h/=10;
            nums[d].c = t;
            t = h%10;
            nums[d].v = t;
        }
        ec =0;
        for(int d=0;d<=i;d++){
            for(int w=d+1;w<=i;w++){
                    edges[ec].from = d;
                    edges[ec].to = w;
                    edges[ec].w = getW(d,w);
                    edges[ec+1].from = w;
                    edges[ec+1].to = d;
                    edges[ec+1].w =  edges[ec].w;
                    ec+=2;
        }
        }
        int newSum = kruskal(i+1);
        printf("%d\n",newSum);
    }

return 0;}
