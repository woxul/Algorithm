#include<stdio.h>

int main(void) {

	int i, t, check, c = 1;

	int s;

	scanf("%d", &s);
	if (s == 1) {
		printf("666");
		return 0;
	}
	for (i = 667;;i++) {
		t = i;
		check = 0;
		while (t)
		{
			if (t % 1000 == 666) {
				check = 1;
			}
			t /= 10;
		}
		if (check) {
			c++;
			if (c==s){
				break;
			}
		}
	}
	printf("%d",i);
	return 0;
}