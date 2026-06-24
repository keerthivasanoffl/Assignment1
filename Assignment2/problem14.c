#include <stdio.h>
int main(){
    int n,x,y;
    scanf("%d",&n);
    x=n/100;
    y=n%100;
    printf("%d",x==y);
    return 0;
}