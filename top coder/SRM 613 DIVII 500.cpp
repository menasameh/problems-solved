#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

#define all(v) v.begin(), v.end()

class TaroFriends{
public :
    int getNumber(vector <int> coordinates, int X){
    int s = coordinates.size();
    sort(all(coordinates));
    int oo = 1000000000;
    int ans= oo;
    for(int j=0;j<s;j++){
    int hi =-oo;
    int lo = oo;
        for(int i =0;i<j;i++){
            hi = max(hi,coordinates[i]+X);
            lo = min(lo,coordinates[i]+X);
        }
        for(int i =j;i<s;i++){
            hi = max(hi,coordinates[i]-X);
            lo = min(lo,coordinates[i]-X);
        }
        ans = min(ans,abs(hi-lo));
    }
    return ans;


    }

};