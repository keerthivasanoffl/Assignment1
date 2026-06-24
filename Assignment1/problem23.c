/*Get a number from the user,
 subtract 5 from the number if the sum of digit is odd. 
DO NOT USE IF*/
#include <stdio.h>
int main(){
    int n,y,sum;
    scanf("%d",&n);
    sum=(n/10)+(n%10);
    y=n-(sum%2)*5;
    printf("The Value: %d",y);
}