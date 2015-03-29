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

#define clr(v, d) memset(v, d, sizeof(v))

int arr[30][30];
bool mask[30][30];
int x;
bool p(int i,int j){
if(i < 0 || i >=x || j<0 || j >= x)
    return false ;
if(arr[i][j] == 1 && !mask[i][j])
    return true ;
return false;
}

void visit(int i,int j){
    if(i < 0 || i >=x || j<0 || j >= x)
        return ;

    if(p(i-1,j-1)){
        mask[i-1][j-1] = true;
        visit(i-1,j-1);
    }
    if(p(i,j-1)){
        mask[i][j-1] = true;
        visit(i,j-1);
    }
    if(p(i+1,j-1)){
        mask[i+1][j-1] = true;
        visit(i+1,j-1);
    }

    if(p(i-1,j)){
        mask[i-1][j] = true;
        visit(i-1,j);
    }
    if(p(i+1,j)){
        mask[i+1][j] = true;
        visit(i+1,j);
    }


    if(p(i-1,j+1)){
        mask[i-1][j+1] = true;
        visit(i-1,j+1);
    }
    if(p(i,j+1)){
        mask[i][j+1] = true;
        visit(i,j+1);
    }
    if(p(i+1,j+1)){
        mask[i+1][j+1] = true;
        visit(i+1,j+1);
    }
}
int main(){
    int counter = 1;
while(scanf("%d",&x) == 1){
for(int i=0;i<x;i++){
        char line[100] ;
        cin >> line;
    for(int j=0;j<x;j++){
        arr[i][j] = line[j] == '1' ? 1:0;
    }
}
clr(mask,false);
int c =0;
for(int i=0;i<x;i++){
    for(int j=0;j<x;j++){
            if(arr[i][j] == 1 && !mask[i][j]){
                 visit(i,j);
                c++;
            }
    }
}
printf("Image number %d contains %d war eagles.\n",counter,c);
counter++;
}
return 0;
}
