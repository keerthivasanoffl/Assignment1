#include <stdio.h>
int main(){
    int n, i = 2, c = 1;
    scanf("%d", &n);
    if(n <= 1){
        printf("Not Prime");
        return 0;
    }
loop:
    if(i < n){
        if(n % i == 0){
            c = 0;
            goto end;
        }
        i++;
        goto loop;
    }
end:
    if(c)
        printf("Prime");
    else
        printf("Not Prime");
}