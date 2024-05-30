#include<stdio.h>

int main(void) {

	int arr[100] = {0,};
	int n, m, a, b, c;
	scanf("%d", &n);
	scanf("%d", &m);

	for (int i = 0; i < m; i++) {
		scanf("%d %d %d", &a, &b, &c);
		for (int j = a; j <= b; j++) {
			arr[j-1] = c;
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	
	return 0;
}