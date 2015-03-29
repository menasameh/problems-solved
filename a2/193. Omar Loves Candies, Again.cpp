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

int main(){
int arr[30];
int k;
cin >> k ;
scanf("%*c");
while(k--){
memset(arr,0,sizeof(arr));
    char t;
    scanf("%c",&t);
    while(t!='\n'){
        arr[t-'a']++;
        scanf("%c",&t);
    }
    int max= 0;
    for(int i=0;i<28;i++){
        if(arr[i] > arr[max]){
            max = i;
        }
    }
    printf("%d %c\n",arr[max],max+'a');
}
return 0;
}