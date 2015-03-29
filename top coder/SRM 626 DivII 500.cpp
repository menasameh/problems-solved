#include <iostream>
#include <string>
#include <vector>
using namespace std;
class  FixedDiceGameDiv2{
    public:
double getExpectation(int a, int b){
double sum =0;
double count =0;
for(int x=1;x<=a;x++){
for(int y=1;y<=b;y++){
	if(x>y){
	count++;
	sum+=x;
	}
}
}
return sum/count;
}
};