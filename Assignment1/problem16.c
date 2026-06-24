//Get a 4 digit num and rev first two digit and print
#include <stdio.h>
int main(){
    int n,x,y,z,k;
    scanf("%d",&n);
    x=n%100;
    y=n/100;
    z=((y%10)*10)+(y/10);
    k=(z*100)+x;
    printf("The value: %d",k);
}