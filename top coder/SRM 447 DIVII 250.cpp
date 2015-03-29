#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;
#define all(v) v.begin(),v.end


bool rev(int i,int j){
return j<i;
}

class ImportantTasks{
public :



int maximalCost(vector <int> complexity, vector <int> computers){
sort(complexity.begin(),complexity.end(),rev);

sort(computers.begin(),computers.end(),rev);
int p=0;
int ret=0;
for(int i=0;i<computers.size();i++){
	for(int j=p;j<complexity.size();j++){
		if(computers[i] >= complexity[j]){
			p = j+1;
			ret++;
			break;
		}
	}
}
return ret;
}
};