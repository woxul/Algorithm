#include <stdio.h>

int main()
{
    int n,k;
    int cnt=0;
    scanf("%d",&n);
    int arr[n];
    scanf("%d",&k);
    
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=n-1; i>=0; i--){
        cnt+=k/arr[i];
        k%=arr[i];
        
        if(k==0){
            break;
        }
    }
    printf("%d",cnt);
}