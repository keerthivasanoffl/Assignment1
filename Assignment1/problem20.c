/*Get 3 digit number and change the ten's digit to zero*/

#include <stdio.h>
int main(){
    int n,y;
    scanf("%d",&n);
    y=((n/100)*100)+n%10;
    printf("%d",y);

}