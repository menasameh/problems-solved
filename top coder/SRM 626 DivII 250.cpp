#include <iostream>
#include <string>
#include <vector>
using namespace std;
class  SumOfPower{
    public:
int findSum(vector <int> array){
int size = array.size();
int sum =0;
for(int x=1; x<size+1;x++){
	for(int y=0;y<size-x+1;y++){
	for(int z=0;z<x;z++){
	sum +=array[y+z];
	}
	}
}

return sum;
}

};