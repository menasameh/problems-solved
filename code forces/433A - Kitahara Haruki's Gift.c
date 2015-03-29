#include <stdio.h>
int main(){
	int x,y,temp;
	int c100=0,c200=0;
	scanf("%d",&x);
	    for(y=0;y<x;y++){
            scanf("%d",&temp);
            if(temp == 100){
                c100++;
            }
            else{
                c200++;
            }
	    }
	    if(c200%2 ==0){
                if(c100%2 == 0){
                    printf("YES");
                }
                else{
                    printf("NO");
                }
	    }
	    else{
                if(c100%2 == 0 && c100!=0){
                    printf("YES");
                }
                else{
                    printf("NO");
                }
	    }
	return 0;
}