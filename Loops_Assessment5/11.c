#include <stdio.h>
int main(){
    int n,count=1;
    scanf("%d",&n);
    if(n<10){
        printf("%d",count);
    }
    else{
        for(int i=n;i>=10;i/=10){
            count +=1;
        }
    }
    printf("%d",count);
}