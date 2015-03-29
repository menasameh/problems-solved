#include <iostream>
#include <string>
#include <vector>
#define width 8
#define heigth 8
using namespace std;
class WhiteCells{
public :
int countOccupied(vector <string> board){
return ans(board);
}
int ans(vector <string> board){
int counter =0;
for(int x=0;x<width;x++){
string row = board[x];

for(int y=0;y<heigth;y++){
if((x+y)%2 == 0  &&  row[y] == 'F' ){
counter++;
}
}
}
return counter;
}
};