#include <stdio.h>

int main() {
    int k, sum = 0;
    scanf("%d", &k);

    int stack[100000]; 
    int top = -1; 

    for (int i = 0; i < k; i++) {
        int num;
        scanf("%d", &num);

        if (num == 0) {
            if (top >= 0) {
                top--; 
            }
        }
        else {
            stack[++top] = num;
        }
    }

    for (int i = 0; i <= top; i++) {
        sum += stack[i];
    }
    printf("%d\n", sum); 
    return 0;
}
