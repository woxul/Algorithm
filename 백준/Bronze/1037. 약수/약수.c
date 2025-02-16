#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int d[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &d[i]);
    }

    int min = d[0];
    int max = d[0];
    for (int i = 1; i < n; i++) {
        if (d[i] < min) min = d[i];
        if (d[i] > max) max = d[i];
    }

    printf("%d\n", min * max);

    return 0;
}
