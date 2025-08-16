#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    bool answer = false;
    int sum=0;
    int o=x;
    while(x>0) {
        sum+=x%10;
        x/=10;
    }
    if (o%sum==0){
        answer=true;
    }
    return answer;
}