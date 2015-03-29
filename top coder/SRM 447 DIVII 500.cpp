#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool s(pair <pair <int , int > , int > x, pair <pair <int , int > , int > y){
	if(x.second > y.second){
		return false;
	}
	else if(x.second < y.second){
		return true;
	}
	else {
		if(x.first.first > y.first.first){
			return false;
		}
		else if(x.first.first < y.first.first){
			return true;
		}
		else{
			if(x.first.second > y.first.second){
				return false;
			}
			else if(x.first.second < y.first.second){
				return true;
			}
		}
	}
}


class KnightsTour{
public :

int kx,ky;
int ccc=1;
int v[8][8];

int check(int x,int y){
	if(x <0 || x >=8 || y<0 || y>=8){
		return 0;
	}
	if(v[y][x] == 1){
		return 0;
	}
	return 1;
}


int getA(int x, int y){
int counter=0;
if(check(x-2,y-1)){
		counter++;
	}
		if(check(x-2,y+1)){
		counter++;
	}
		if(check(x-1,y-2)){
		counter++;
	}
		if(check(x-1,y+2)){
		counter++;
	}
	if(check(x+2,y-1)){
		counter++;
	}
		if(check(x+2,y+1)){
		counter++;
	}
		if(check(x+1,y-2)){
		counter++;
	}
		if(check(x+1,y+2)){
		counter++;
	}
return counter;
}

pair <int ,int > choose(int x,int y){
	vector <pair <pair <int , int > , int > > ret;
	pair <pair <int , int > , int > ans;
	if(check(x-2,y-1)){
		int a = getA(x-2,y-1);
		ans.first.first = x-2;
		ans.first.second = y-1;
		ans.second = a;
		ret.push_back(ans);
	}
		if(check(x-2,y+1)){
		int a = getA(x-2,y+1);
		ans.first.first = x-2;
		ans.first.second = y+1;
		ans.second = a;
		ret.push_back(ans);
	}
		if(check(x-1,y-2)){
		int a = getA(x-1,y-2);
		ans.first.first = x-1;
		ans.first.second = y-2;
		ans.second = a;
		ret.push_back(ans);
	}
		if(check(x-1,y+2)){
		int a = getA(x-1,y+2);
		ans.first.first = x-1;
		ans.first.second = y+2;
		ans.second = a;
		ret.push_back(ans);
	}
	if(check(x+2,y-1)){
		int a = getA(x+2,y-1);
		ans.first.first = x+2;
		ans.first.second = y-1;
		ans.second = a;
		ret.push_back(ans);
	}
		if(check(x+2,y+1)){
		int a = getA(x+2,y+1);
		ans.first.first = x+2;
		ans.first.second = y+1;
		ans.second = a;
		ret.push_back(ans);
	}
		if(check(x+1,y-2)){
		int a = getA(x+1,y-2);
		ans.first.first = x+1;
		ans.first.second = y-2;
		ans.second = a;
		ret.push_back(ans);
	}
		if(check(x+1,y+2)){
		int a = getA(x+1,y+2);
		ans.first.first = x+1;
		ans.first.second = y+2;
		ans.second = a;
		ret.push_back(ans);
	}
	sort(ret.begin(),ret.end(),s);
	v[ret[0].first.second][ret[0].first.first] = 1;
	return ret[0].first;
}

int visitedPositions(vector <string> board){
for(int x=0;x<8;x++){
	for(int y=0;y<8;y++){
		if(board[x][y] == 'K'){
			kx = x;
			ky = y;
			v[y][x] = 1;
		}
		else if (board[x][y] == '*'){
			v[y][x] = 1;
		}
		else {
			v[y][x] = 0;
		}
	}
}

while(1){
	int aa = getA(kx,ky);
	if(aa == 0){
		return ccc;
	}
	pair <int ,int > n = choose(kx,ky);
	kx = n.first;
	ky = n.second;
	ccc++;

}
}
};