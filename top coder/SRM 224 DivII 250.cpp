#include <iostream>
#include <string>
using namespace std;
class InsideOut{
public:
		string unscramble(string line){
		char temp;
		string ans = line;
		int half = (line.length()/2)-1;
		for(int x=0;x<=half/2;x++){
			temp = ans[x];
			ans[x] = ans[half-x];
			ans[half-x] = temp;

			temp = ans[half+1+x];
			ans[half+1+x] = ans[2*(half+1) - x-1];
			ans[2*(half+1) - x-1]= temp;
		}

		return ans;
	}
};