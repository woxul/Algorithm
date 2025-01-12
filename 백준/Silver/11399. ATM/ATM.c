#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main() {
    int n, t = 0;
    scanf("%d", &n);

    int p[n];
    for (int i = 0; i < n; i++) scanf("%d", &p[i]);

    qsort(p, n, sizeof(int), compare); 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            t += p[j];
        }
    }

    printf("%d\n", t); 
    return 0;
}
