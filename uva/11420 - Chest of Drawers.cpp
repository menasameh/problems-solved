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


int n,m;
unsigned long long memo[70][70][2];
unsigned long long foo(int curr,int locked,int last){
if(locked > m) return 0;
if (curr == n) return locked == m;

if(memo[curr][locked][last] !=-1) return memo[curr][locked][last];
unsigned long long res =0;
            res+= foo(curr+1,locked+(last?1:0),1);
            res+= foo(curr+1,locked,0);
return memo[curr][locked][last] = res;
}


int main(){
while(1){
    scanf("%d %d",&n,&m);
    if(n <0) return 0;
    for (int i=0;i<70;i++) for(int j=0;j<70;j++) for(int k=0;k<2;k++) memo[i][j][k] = -1;
    printf("%llu\n",foo(0,0,1));
}
return 0;}
