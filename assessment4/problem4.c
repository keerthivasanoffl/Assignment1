#include <stdio.h>

int main()
{
    int n = 6;
    int sum=0;

loop:
    if(n>=1)
    {
        sum = sum+n;
        n--;
        goto loop;
    }
    printf("%d",sum);

    return 0;
}