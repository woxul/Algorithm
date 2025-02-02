#include <stdio.h>

int main() {
    int t, n;
    long long p[101]; 
    p[1] = p[2] = p[3] = 1;
    
    scanf("%d", &t);
    
    for (int i = 4; i <= 100; i++) {
        p[i] = p[i - 2] + p[i - 3];
    }

    while (t--) {
        scanf("%d", &n);
        printf("%lld\n", p[n]);
    }

    return 0;
}
