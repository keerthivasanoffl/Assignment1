#include <stdio.h>
int main(){
    int sum=0;
    for(int i=10;i<=99;i++){
        int x=i%10;
        if(x==5){
            sum += i;
            
        }
        
    }
    printf("%d\n",sum);
}