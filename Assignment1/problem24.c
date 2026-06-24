/*Get a 3 digit number from the user,
 subtract 5 from the number if the one's and hundred's digits are odd. 
DO NOT USE "IF"*/
#include <stdio.h>
int main(){
    int n,y,ones,hundred;
    scanf("%d",&n);
    ones=n%10;
    hundred=n/100;
    y=n-((ones%2)*(hundred%2))*5;
    printf("The Value: %d",y);
}