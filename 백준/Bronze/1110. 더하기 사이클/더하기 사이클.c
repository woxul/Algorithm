#include <stdio.h>

int main() {
    int n, num, cnt = 0;
    scanf("%d", &n);
    
    num = n;
    
    while (1) {
        int l = num / 10;
        int r = num % 10;
        int s = l + r;
        
        num = (r * 10) + (s % 10);
        cnt++;

        if (num == n)
            break;
    }
    
    printf("%d\n", cnt);
    return 0;
}
