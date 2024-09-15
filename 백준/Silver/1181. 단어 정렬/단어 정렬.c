#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int cmp(const void* arg1, const void* arg2) {
	if (strlen((const char*)arg1) > strlen((const char*)arg2)) {
		return 1;
	}
	else if (strlen((const char*)arg1) < strlen((const char*)arg2)) {
		return -1;
	}
	else {
		return strcmp((char*)arg1, (char*)arg2);
	}
}
int main(void) {
	int s, l = 51;
	char arr[20000][51] = { 0 };
	scanf("%d", &s);

	for (int i = 0; i < s; i++) {
		scanf("%s", arr[i]);
	}

	qsort(arr, s, sizeof(arr[0]), cmp);

	for (int i = 0; i < s; i++) {
		if (strcmp(arr[i], arr[i + 1]) != 0 || i == s - 1) {
			printf("%s\n", arr[i]);
		}
	}
	return 0;
}