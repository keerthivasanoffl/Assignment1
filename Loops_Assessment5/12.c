#include <stdio.h>
int main(){
    int n,count=0,k;
    scanf("%d",&n);
    if(n<10){
        printf("%d",n);
    }
    else{
        for(int i=n;i>0;i/=10){
            k=i%10;
            count +=k;
        }
        printf("%d",count);
    }
    
}