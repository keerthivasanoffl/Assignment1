#include <stdio.h>

int main()
{
    int n = 1;
    int sum=0;

loop:
    if(n<=5)
    {
        sum = sum+n;
        n++;
        goto loop;
    }
    printf("%d",sum);

    return 0;
}