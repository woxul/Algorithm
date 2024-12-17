#include <stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int main()
{
    int arr[510][510];
    int n;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            arr[i-1][j] += max(arr[i][j], arr[i][j+1]);
        }
    }
    
    printf("%d\n", arr[0][0]);
    return 0;
}
