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



int main ()
{
    char arr[250];
    memset(arr,0,sizeof(arr));
    string x;
    cin >> x;
    int index =0;
    for(int i=0;i<x.size();i++){
        if(tolower(x[i]) == 'a' || tolower(x[i]) == 'o' || tolower(x[i]) == 'y' || tolower(x[i]) == 'e' || tolower(x[i]) == 'u' || tolower(x[i]) == 'i'){

        }
        else{
            arr[index++] = '.';
            arr[index++] = tolower(x[i]);
        }
    }
    cout << arr << "\n";
}
