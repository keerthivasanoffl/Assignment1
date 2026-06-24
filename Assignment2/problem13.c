#include <stdio.h>
int main(){
    int n,ones,tens;
    scanf("%d",&n);
    ones=n%10;
    tens=(n/10)%10;
    printf("%d",ones==tens);
    return 0;
}