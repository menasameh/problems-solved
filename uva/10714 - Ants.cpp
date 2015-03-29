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

int main(){
int t,i,j,a,l,c;
scanf("%d",&t);
while(t--){
    scanf("%d %d",&l,&c );
    int hi = 0;
    int lo = 0;
    for(i=0;i<c;i++){
        scanf ("%d",&a);
        hi = max(hi,max(a,l-a));
        lo = max(lo,min(a,l-a));
    }
    printf("%d %d\n",lo,hi);
}
return 0;
}
