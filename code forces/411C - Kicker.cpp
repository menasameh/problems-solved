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
int dx1,ax1,dx2,ax2,dy1,ay1,dy2,ay2,d1,a1;
void pre(){
    int n1=dx1+ax2;
    int n2=dx2+ax1;
    if(n1 > n2){
        d1=dx1;
        a1=ax2;
    }
    else if(n1 < n2){
        d1=dx2;
        a1=ax1;
    }
    else{
        a1=n1-max(ax1,ax2);
        d1=n1-a1;
    }
}
void calc(){
   if(dy1>a1 && ay2>d1){
        printf("Team 2\n");
        return;
   }
   if(dy2>a1 && ay1>d1){
        printf("Team 2\n");
        return;
   }
   if((dy1<a1 && ay2<d1) && (dy2<a1 && ay1<d1)){
        printf("Team 1\n");
        return;
   }
   printf("Draw\n");
   return;
}
int main() {
    #ifndef ONLINE_JUDGE
        //freopen("in.in","r",stdin);
    #endif
    cin>>dx1>>ax1>>dx2>>ax2>>dy1>>ay1>>dy2>>ay2;
    pre();
    calc();
    return 0;
}