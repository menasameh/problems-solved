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
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
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
typedef vector<vector<int> > vii;
typedef long double ld;

const int oo = (int) 1e9;
const double eps = 1e-9;


int main(){
int T;
read(T);
while(T--){
int n, m;
read2(n,m);
int grid[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        read(grid[i][j]);
    }
}
int vis[101];
memset(vis,0,sizeof(vis));

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
       if(i>=1 && j>=1 &&grid[i][j]!=-1&& grid[i][j] == grid[i-1][j-1]){
            vis[grid[i][j]] = 1;

       }
       if(i>=1 &&grid[i][j]!=-1&& grid[i][j] == grid[i-1][j]){
            vis[grid[i][j]] = 1;

       }
       if(i>=1 && j<m-1 &&grid[i][j]!=-1&& grid[i][j] == grid[i-1][j+1]){
            vis[grid[i][j]] = 1;

       }


if( j>=1 &&grid[i][j]!=-1&& grid[i][j] == grid[i][j-1]){
            vis[grid[i][j]] = 1;

       }
       if( j<m-1 &&grid[i][j]!=-1&& grid[i][j] == grid[i][j+1]){
            vis[grid[i][j]] = 1;

       }



       if(i<n-1 && j>=1 &&grid[i][j]!=-1&& grid[i][j] == grid[i+1][j-1]){
            vis[grid[i][j]] = 1;

       }
       if(i<n-1 &&grid[i][j]!=-1&& grid[i][j] == grid[i+1][j]){
            vis[grid[i][j]] = 1;

       }
       if(i<n-1 && j<m-1 &&grid[i][j]!=-1&& grid[i][j] == grid[i+1][j+1]){
            vis[grid[i][j]] = 1;

       }

    }
}
int sum=0;
for(int i=0;i<101;i++){
    sum+=vis[i];
}
printf("%d\n",sum);

}
return 0;
}
