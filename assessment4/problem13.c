#include <stdio.h>
int main(){
    int n,rev=0;
    scanf("%d",&n);
    loop:
    if(n!=0){
        rev=rev*10+(n%10);
        n /= 10;
        goto loop;
    }
    printf("%d",rev);
}