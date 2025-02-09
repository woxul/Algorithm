#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int temp_a = a, temp_b = b;

    while (temp_b != 0) {
        int temp = temp_b;
        temp_b = temp_a % temp_b;
        temp_a = temp;
    }
    int gcd = temp_a;
    int lcm = (a * b) / gcd; 
    
    printf("%d\n", gcd);
    printf("%d\n", lcm); 

    return 0;
}