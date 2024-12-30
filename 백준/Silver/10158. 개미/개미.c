#include <stdio.h>

int main() {
    int w, h, p, q, t;
    scanf("%d %d %d %d %d", &w, &h, &p, &q, &t);

    int temp_x = (p + t) % (2 * w);
    int x = (temp_x > w) ? (2 * w - temp_x) : temp_x;

    int temp_y = (q + t) % (2 * h);
    int y = (temp_y > h) ? (2 * h - temp_y) : temp_y;

    printf("%d %d\n", x, y);
    return 0;
}
