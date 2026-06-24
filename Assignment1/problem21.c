/*Get a number from the user,
 subtract 5 from the number if the number is odd. 
DO NOT USE IF*/
#include <stdio.h>
int main(){
    int n,y;
    scanf("%d",&n);
    y=n-(n%2)*5;
    printf("The Value: %d",y);
}