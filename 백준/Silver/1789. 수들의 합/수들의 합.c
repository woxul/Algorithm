#include<stdio.h>

int main(void) {

	long long int s, sum = 0;
	long n = 0;
	scanf("%lld", &s);

	while (1) {
		n += 1;
		sum += n;
		if (sum > s) {
			break;
		}
	}
	printf("%ld", n-1);
	return 0;
}