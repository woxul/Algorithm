#include <stdio.h>

int main()
{
    int c[10]={0,};
    int i,n,max;
    
    scanf("%d",&n);
    
    while(n>0){
        c[n%10]=c[n%10]+1;
        n/=10;
    }
    c[6]=(c[6]+c[9]+1)/2;
    
    max=0;
    for(i=0; i<9; ++i){
        if(max<c[i]){
            max=c[i];
        }
    }
    printf("%d",max);
    
    return 0;
}