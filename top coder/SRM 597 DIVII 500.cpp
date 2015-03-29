#include <iostream>

using namespace std;
class LittleElephantAndString{
public :
int getNumber(string A, string B){
int arr[26];
for(int x=0;x<26;x++){
    arr[x] = 0;
}
int ptra,ptrb;
int len=A.length();
B.length();
ptra = ptrb = len-1;
while(ptrb>-1){
    if(ptra == -1){
             int temp =B[ptrb]-'A';
        if(--arr[temp] < 0){
            return -1;
        }
        else{
            ptrb--;
        }
    }
    else if(A[ptra] == B[ptrb]){
        ptra--;
        ptrb--;
        len--;
    }
    else{
            int temp = A[ptra] - 'A';
        arr[temp] +=1;
        ptra--;
    }

}
return len ;
}



};