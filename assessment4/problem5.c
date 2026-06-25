#include <stdio.h>
int main(){
    int n=1;
    loop:
    printf("%d\n",n);
    n += 2;
    if(n<=9){
        goto loop;
    }
}