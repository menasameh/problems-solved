#include <iostream>
#include <string>
using namespace std;
class CubeWalking{
public :
string arr[3][3] = {{"RED","BLUE","RED"},{"BLUE","GREEN","BLUE"},{"RED","BLUE","RED"}};
string finalPosition(string movement){
int x,y;
x=1;
y=1;
int z;
char dir = 'u';
for(z=0;z<movement.length();z++){
if(movement[z] == 'W'){
	if(dir == 'u'){
		y--;
	}
	else if(dir == 'd'){
		y++;
	}
	else if(dir == 'l'){
		x--;
	}
	else if(dir == 'r'){
		x++;
	}
	if(x == -1){
		x= 2;
	}
	if(x == 3){
		x= 0;
	}
	if(y == -1){
		y= 2;
	}
	if(y == 3){
		y= 0;
	}
}

else if(movement[z] == 'L'){

	if(dir == 'u'){
		dir = 'l';
	}
	else if(dir == 'd'){
		dir = 'r';
	}
	else if(dir == 'l'){
		dir = 'd';
	}
	else if(dir == 'r'){
		dir = 'u';
	}

}

else if(movement[z] == 'R'){

	if(dir == 'u'){
		dir = 'r';
	}
	else if(dir == 'd'){
		dir = 'l';
	}
	else if(dir == 'l'){
		dir = 'u';
	}
	else if(dir == 'r'){
		dir = 'd';
	}

}

}


return arr[x][y];
}


};