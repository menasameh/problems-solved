#include <iostream>
#include <vector>
using namespace std;
class GreatFairyWar {
public:

  int minHP(vector<int> dps, vector<int> hp) {
    return min(dps, hp);
  }
int min(vector <int> dps, vector <int> hp){
int hitPoints = 0;
int size = dps.size();
int sum =0;
for(int x=0;x<size;x++){
sum +=dps[x];
}
for(int x=0;x<size;x++){
hitPoints += sum  * hp[x];
sum -= dps[x];
}

return hitPoints;

}

};