#include <stdio.h>
int main(){
    int tens,sum=0;
    for(int i=11;i<=99;i++){
        tens=i/10;
        if(i%2!=0 &&tens==7){
            sum += i;
        }
    }
    printf("%d",sum);
}