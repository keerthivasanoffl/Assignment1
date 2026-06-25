#include <stdio.h>
int main(){
    int n;
    int count=1;
    scanf("%d",&n);
    if(n<10){
        printf("%d",count);
    }
    else{
        loop:
        if(n/10!=0){
            count++;
            n /= 10;  
            goto loop;
        }
        printf("%d",count);
    }
}