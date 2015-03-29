#include <iostream>
#include <vector>
using namespace std;
class GridGenerator{
public:
int generate(vector <int> row, vector <int> col){
int size = row.size();
int grid [size][size] ;
for(int x=0;x<size;x++){
grid[0][x] = row [x] ;
}
for(int x=0;x<size;x++){
grid[x][0] = col [x] ;
}
for(int x=1;x<size;x++){
for(int y=1;y<size;y++){
grid[x][y] = grid[x-1][y] + grid[x][y-1]  + grid[x-1][y-1]  ;
}
}
return grid[size-1][size-1];
}
};