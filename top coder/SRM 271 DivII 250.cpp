#include <iostream>
#include <string>
using namespace std;

class CheckFunction{
public :
int newFunction(string code){
return ans(code);
}
int check(char m){
switch(m){
case '0':return 6;
case '1':return 2;
case '2':return 5;
case '3':return 5;
case '4':return 4;
case '5':return 5;
case '6':return 6;
case '7':return 3;
case '8':return 7;
case '9':return 6;
}

}

int ans(string code){
int sum =0;
for(int x=0;x<code.length();x++){
sum +=check(code[x]);
}
return sum;
}
};