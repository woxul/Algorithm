#include <stdio.h>

int main() {
    int arr[10],arr2[42]={0};
    int a;
    int cnt=0;
    
    for(int i=0; i<10; i++){
        scanf("%d",&arr[i]);
        a=arr[i]%42;
        arr2[a]++;
    }
    for(int i=0; i<42; i++){
        if(arr2[i]!=0){
            cnt++;
        }
    }
    printf("%d",cnt);
    
    return 0;
}
