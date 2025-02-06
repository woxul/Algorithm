#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int cnt[10] = {0};
    int place = 1;

    while (n / place > 0) {
        int l = n - (n / place) * place;
        int c = (n / place) % 10;
        int h = n / (place * 10);

        for (int i = 0; i < 10; i++) {
            cnt[i] += h * place;
        }

        for (int i = 0; i < c; i++) {
            cnt[i] += place;
        }

        cnt[c] += l + 1;

        if (cnt[0] > 0) {
            cnt[0] -= place;
        }

        place *= 10;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", cnt[i]);
    }

    return 0;
}