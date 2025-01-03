#include <stdio.h>

int main()
{
    int n;
    int cnt=0;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=n-1; i>0; i--){
        
        while(arr[i]<=arr[i-1]){
            arr[i-1]-=1;
            cnt++;
        }
    }
    printf("%d",cnt);
}