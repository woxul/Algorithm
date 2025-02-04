#include <stdio.h>

#define MAX 500000

int cards[MAX];
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

        cards[rear % MAX] = cards[front % MAX];  
        front++;
        rear++;
    }

    printf("%d\n", cards[front % MAX]);

    return 0;
}
