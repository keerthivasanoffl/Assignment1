#include <stdio.h>
int main(){
    int n=1;
    loop:
    if(n<=10){
        n++;
        goto loop;
    }
    else{
        printf("%d\n",n);
        n += 2;
        if(n<=20){
            goto loop;
        }
    }
}
