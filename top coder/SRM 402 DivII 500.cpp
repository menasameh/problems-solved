bool com(int x,int y){
return x<y;
}

class ConsecutiveNumbers{

public :
    vi missingNumber(vi x){
    int size = x.size();
    int max = -1;
    int min = 1e9;
    for(int i=0;i<size;i++){
        if(x[i] > max) max = x[i];
        if(x[i] < min) min = x[i];
    }
    int pSize = max - min +1;
    vi ret;
    sort(all(x),com);
    if(pSize == size){
        for(int j=1;j<size;j++){
            if(x[j]-x[j-1] != 1){
                return ret;
            }
        }
        if(min>1)
          ret.push_back(min-1);
          ret.push_back(max+1);
    }
    else if (pSize == size+1){

        for(int j=1;j<size;j++){
            if(x[j]-x[j-1] == 2){
                ret.push_back(x[j]-1);
                break;
            }
        }
    }
    return ret;
    }
};