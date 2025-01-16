#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    while (n-->0) {
        int x, y;
        scanf("%d %d", &x, &y);

        long long d = (long long)y - x;
        long long k = (long long)sqrt(d); 

        if (k * k == d) {
            printf("%lld\n", 2 * k - 1);
        } else if (k * k < d && d <= k * (k + 1)) {
            printf("%lld\n", 2 * k);
        } else {
            printf("%lld\n", 2 * k + 1);
        }
    }

    return 0;
}
