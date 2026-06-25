#include <stdio.h>
int main(){
    int n, sum = 0;
    scanf("%d", &n);
loop:
    sum += n % 10;
    n /= 10;
    if(n != 0){
        goto loop;
    }
    printf("%d", sum);
}