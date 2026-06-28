#include <stdio.h>
int main(){
    int n,temp,first,p=1;
    scanf("%d", &n);
    temp = n;
    for(; temp>=10; temp/=10){
        p*=10;
    }
    first = temp;
    if(first % 2 != 0){
        n = n - p;
    }
    printf("%d", n);
}