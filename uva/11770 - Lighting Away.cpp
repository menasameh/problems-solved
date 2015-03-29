#include <cstring>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>
#include <list>
#include <climits>
#include <cctype>
#include <bitset>
#include <iostream>

using namespace std;
#define all(v) v.begin(), v.endr()
#define rall(v) v.rbegin(), v.rendr()
#define sz(v) ((int)v.size())
#define read(x) scanf("%d",&(x))
#define read2(x, y) scanf("%d %d",&(x),&(y))
#define read3(x, y, z) scanf("%d %d %d",&(x),&(y),&(z))

typedef stringstream ss;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<vector<int> > vvi;
typedef long double ld;

bool vis[10001];
vvi graph(10001);
bool visit[10001];
int degr[10000];
vi degs;


void dfs(int i){
visit[i] = true;
        for(int l=0;l<(int) graph[i].size();l++){
            int child = graph[i][l];
        if(!visit[child])
           dfs(child);
        }
        degs.push_back(i);
}



int main ()
{

   ios_base::sync_with_stdio(0);
   int t;
   int i,j;
   cin >> t;
   int cas = 1;
   while(t--){
    memset(degr, 0, sizeof(degr));
    cin >> i >> j;
    memset(vis,false,sizeof(vis));
    int in,out;
    pii degs[i];
    for(int k=0;k<10001;k++){
        graph[k].clear();
    }
    for(int k=0;k<j;k++){
        cin >> in >> out ;
        graph[in-1].push_back(out-1);
    }

    memset(visit, false, sizeof(visit));
    degs.clear();
    for(int k=0;k<i;k++){
        if(!visit[k])
            dfs(k);
    }
    memset(visit, false, sizeof(visit));
    int ticks = 0;

for(int k=i-1;k>=0;k--){
    stack<int> s;
    int first = degs[k];
    if(vis[first])
        continue;
    s.push(first);
    ticks++;
    while(s.size()!= 0){
        int element = s.top();
            s.pop();
        if(vis[element])
            continue;
        vis[element] = true;
        for(int l=0;l<graph[element].size();l++){
            s.push(graph[element][l]);
        }
    }
}
cout << "Case " << cas++ << ": " << ticks << "\n";
}
return 0;
}
