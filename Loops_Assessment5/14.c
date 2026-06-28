#include <stdio.h>
int main(){
    int n, temp, pow = 1;
    int first, last;
    scanf("%d", &n);
    temp = n;
    last = n % 10;
    for(temp = n; temp >= 10; temp /= 10){
        pow *= 10;
    }
    first = temp;
    n = n - first * pow - last;
    n = n + last * pow + first;
    printf("%d", n);
    return 0;
}