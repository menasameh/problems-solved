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

int d[30] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777,4444,4447,4474,4477,4744,4747,4774,4777,7444,7447,7474,7477,7744,7747,7774,7777};

int main(){
int x,i,j,y,t;
scanf("%d",&t);
for(j=0;j<30;j++){
    if(t%d[j] == 0){
        printf("YES");
        return 0;
    }
}
printf("NO");
return 0;

}
