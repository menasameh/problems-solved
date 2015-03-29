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
int words;
read(T);
while(T--){
string en="";
string arbe="";
string araf="";
int flag=0;
read(words);
for(int i=0;i<words;i++){
string word="";
    cin >> word;
    if(word[0] >= 'a' && word[0] <='z'){
            flag =1;
           en=word;
           en+=" ";
    }
    else{
        if(flag){
            araf+=word;
            araf+=" ";
        }
        else{
           arbe +=word;
           arbe +=" ";
        }
    }
}

cout << araf<<en<<arbe<<endl;
}


return 0;}
