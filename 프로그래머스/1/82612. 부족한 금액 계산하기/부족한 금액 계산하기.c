#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, int money, int count) {
    long long answer = 0;
    long long a=0;
    for(int i=1; i<count+1; i++){
        a+=i*price;
    }
    if(money-a<0){
        answer=a-money;
    }
    return answer;
}