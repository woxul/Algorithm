#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); 

    
    int dp[N + 1];

    
    dp[0] = 0; 
    if (N >= 1) {
        dp[1] = 1;  
    }

    
    for (int i = 2; i <= N; i++) {
        dp[i] = 0; 
        
        if (i >= 1 && dp[i - 1] == 0) {
            dp[i] = 1;
        }
        if (i >= 3 && dp[i - 3] == 0) {
            dp[i] = 1;
        }
    }
    
    if (dp[N] == 1) {
        printf("SK\n"); 
    } else {
        printf("CY\n"); 
    }

    return 0;
}
