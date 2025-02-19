#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2); 

    int n1 = (num1 % 10) * 100 + ((num1 / 10) % 10) * 10 + (num1 / 100); 
    int n2 = (num2 % 10) * 100 + ((num2 / 10) % 10) * 10 + (num2 / 100); 
    
    if (n1 > n2) {
        printf("%d\n", n1);
    } else {
        printf("%d\n", n2);
    }

    return 0;
}
