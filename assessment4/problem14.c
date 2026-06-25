#include <stdio.h>

int main(){
    int n, first, last, temp, pow = 1;
    scanf("%d", &n);
    temp = n;
    last = n % 10;
    loop:
    if(temp >= 10){
        temp /= 10;
        pow *= 10;
        goto loop;
    }
    first = temp;
    n = n - first * pow - last;
    n = n + last * pow + first;
    printf("%d", n);
    return 0;
}