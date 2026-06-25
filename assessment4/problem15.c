#include <stdio.h>
int main(){
    int n, temp, div = 1, msd;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
findDiv:
    if (temp >= 10){
        temp = temp / 10;
        div = div * 10;
        goto findDiv;
    }
    msd = n / div;
    if (msd % 2 == 0)
        goto printNumber;
    n = n - div;
printNumber:
    printf("Output = %d", n);
    return 0;
}