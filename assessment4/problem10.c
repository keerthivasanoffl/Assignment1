#include <stdio.h>
int main(){
    int n=71;
    int sum=0;
    loop:
    if(n<=79){
        sum +=n;
        n +=2;
        goto loop;
    }
    printf("%d",sum);
}