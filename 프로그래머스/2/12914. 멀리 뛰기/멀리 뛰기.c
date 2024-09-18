#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int n) {
    
    long long answer=0;
    long long a[n];
    a[0]=1;
    a[1]=1;
    
    for(int i=2; i<=n; i++){
        a[i]=(a[i-1]+a[i-2])%1234567;
    }
    answer=a[n];
    return answer;
}