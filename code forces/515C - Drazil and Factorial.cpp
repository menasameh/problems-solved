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
typedef vector<vector<int> > vii;
typedef long double ld;

int arr[20];
int index;
vector<int> ans;

void decomposit(long long num){
    index =0;
while(num>0){
arr[index++] = num%10;
num /=10;
}
}

void composit(){
    int m = index;
while(m){
        int element = arr[m-1];
if(element == 1 || element == 0){
        m--;
    continue;
}
else if(element == 4){
ans.push_back(3);
ans.push_back(2);
ans.push_back(2);
}
else if(element == 6){
ans.push_back(5);
ans.push_back(3);
}
else if(element == 8){
ans.push_back(7);
ans.push_back(2);
ans.push_back(2);
ans.push_back(2);
}
else if(element == 9){
ans.push_back(7);
ans.push_back(3);
ans.push_back(3);
ans.push_back(2);
}
else{
ans.push_back(element);
}
m--;
}
}

int main ()
{
   int n;
   long long num;
   scanf("%d %I64d",&n,&num);
   decomposit(num);
   composit();
   sort(ans.begin(), ans.end());
   for(int i=ans.size()-1;i>=0;i--){
        printf("%d",ans[i]);
   }
   printf("\n");
}
