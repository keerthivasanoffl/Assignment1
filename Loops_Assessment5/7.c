#include <stdio.h>
int main(){
    for(int i=11;i<=99;i++){
        int x=i%10;
        int y=i/10;
        int sum=x+y;
        if(i%2!=0 && sum==7){
            printf("%d\n",i);
        }
    }
}