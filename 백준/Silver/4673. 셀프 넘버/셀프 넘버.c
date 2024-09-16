#include<stdio.h>

int sum(int n) {
	int sum = n;
	while (0 < n) {
		sum += n % 10;
		n /= 10;
	 }
	return sum;
}
int main(void) {
	int arr[10001], cheak;
	for (int i = 1; i <= 10000; i++) {
		cheak = sum(i);
		if (cheak < 10001) {
			arr[cheak] = 1;
		}
	}
	for (int i = 1; i <= 10000; i++) {
		if (arr[i] != 1) {
			printf("%d\n", i);
		}
	}
	return 0;
}