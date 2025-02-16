#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int nums[5];
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &nums[i]);
        sum += nums[i]; 
    }

    printf("%d\n", sum / 5);

    qsort(nums, 5, sizeof(int), compare);

    printf("%d\n", nums[2]);

    return 0;
}
