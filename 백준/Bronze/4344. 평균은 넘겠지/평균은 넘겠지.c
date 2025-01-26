#include <stdio.h>

int main() {
    int C;
    scanf("%d", &C);

    for (int i = 0; i < C; i++) {
        int n;
        scanf("%d", &n);

        int scores[n];
        int sum = 0;

        for (int j = 0; j < n; j++) {
            scanf("%d", &scores[j]);
            sum += scores[j];
        }

        double average = (double)sum / n;

        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (scores[j] > average) {
                cnt++;
            }
        }

        double p = (double)cnt / n * 100;

        printf("%.3f%%\n", p);
    }

    return 0;
}
