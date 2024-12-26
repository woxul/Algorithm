#include <stdio.h>
int main()
{    int n,c=0;
    
    scanf("%d",&n);
    
    while(1){
        if(n%5==0){
            c++;
            n-=5;
        }
        else{
            c++;
            n-=3;
        }
        if(n<=0){
            break;
        }
    }
    
    if(n<0){
        printf("%d",-1);
    }
    else{
        printf("%d",c);
    }
    return 0;
}