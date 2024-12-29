#include <stdio.h>

int main()
{
    int n;
    
    scanf("%d",&n);
    
    if(n<100){
        printf("%d",n);
    }
    else{
        int j,k,l;
        int c=99;
        
        for(int i=100;i<=n; i++){
            j=i/100;
            k=i/10%10;
            l=i%10;
            
            if((l-k)==(k-j)){
                c++;
            }
        }
        printf("%d",c);
    }

    return 0;
}