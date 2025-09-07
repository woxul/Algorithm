#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    int* answer = (int*)malloc(20*sizeof(int));
    int i;
    while(n>0){
        answer[i++]=n%10;
        n/=10;
    }
    return answer;
}