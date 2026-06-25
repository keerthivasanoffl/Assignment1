#include <stdio.h>
int main(){
    int n = 10;
    int x, y, sum;
loop:
    if(n <= 99){
        x = n % 10;
        y = n / 10;
        sum = x + y;
        if(sum == 6)
            printf("%d\n", n);
        n += 2;      
        goto loop;
    }
}