#include <stdio.h>

#define MAX_N 500000

int cards[MAX_N];
int front = 0, rear;
int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        cards[i] = i + 1;
    }
    rear = n;

    while (rear - front > 1) {  
        front++;

        cards[rear % MAX_N] = cards[front % MAX_N];  
        front++;
        rear++;
    }

    printf("%d\n", cards[front % MAX_N]);

    return 0;
}
