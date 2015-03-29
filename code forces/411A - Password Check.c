int check(char arr[],int m){
   int i=0,l=0,k=0,j=0,h=0,g=0;
   for(i=0;i<m;i++){
    if(arr[i]>='a' && arr[i]<='z'){
    l=1;
   }
   else if(arr[i]>='A' && arr[i]<='Z'){
    k=1;
   }
   else if(arr[i]>='0' && arr[i]<='9'){
    j=1;
   }
   }
   if((l&k&j) && m>=5){
    return 1;
   }
   else
   {

       return 0;
   }

}

#include <stdio.h>
int main (){
char arr[1000];
int x;
gets(arr);
if(check(arr,strlen(arr))){
    printf("Correct\n");
}
else{
    printf("Too weak\n");
}
return 0;
}