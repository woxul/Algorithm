#include <stdio.h>
#include <string.h>

int main() {
    char b[51];
    scanf("%s", b);

    int len = strlen(b);

    for (int i = 0; i < len; i++) {
        if (b[i] == 'X') {
            int count = 0;
            while (i < len && b[i] == 'X') {
                count++;
                i++;
            }

            if (count % 2 != 0) {
                printf("-1\n");
                return 0;
            }

            while (count >= 4) {
                for (int j = i - count; j < i - count + 4; j++) {
                    b[j] = 'A';
                }
                count -= 4;
            }
            while (count >= 2) {
                for (int j = i - count; j < i - count + 2; j++) {
                    b[j] = 'B';
                }
                count -= 2;
            }
        }
    }

    printf("%s\n", b);
    return 0;
}