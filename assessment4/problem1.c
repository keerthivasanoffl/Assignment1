#include <stdio.h>

int main()
{
    int n = 1;

loop:
    if(n<=5)
    {
        printf("%d\n", n);
        n++;
        goto loop;
    }

    return 0;
}