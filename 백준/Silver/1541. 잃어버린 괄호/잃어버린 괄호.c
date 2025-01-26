#include <stdio.h>

int main() {
    char n[51]; 
    scanf("%s", n);

    int p = 0;
    int num = 0;
    int minus = 0;

    for (int i = 0; n[i] != '\0'; i++) {
        if (n[i] >= '0' && n[i] <= '9') {  
            num = num * 10 + (n[i] - '0');
        } else {
            if (minus) {
                p -= num;
            } else {
                p += num; 
            }
            num = 0; 
            if (n[i] == '-') {
                minus = 1;
            }
        }
    }

    
    if (minus) {
        p -= num;
    } else {
        p += num;
    }

    printf("%d\n", p);
    return 0;
}
