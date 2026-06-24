/*Get a number from the user,
 subtract 5 from the number if the ten's digit of the number is odd. 
DO NOT USE IF*/
#include <stdio.h>
int main(){
    int n,y,tens;
    scanf("%d",&n);
    tens=(n/10)%10;
    y=n-(tens%2)*5;
    printf("The Value: %d",y);
}