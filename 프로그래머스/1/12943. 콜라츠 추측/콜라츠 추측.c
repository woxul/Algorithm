#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num) {
    int answer = 0;
    for(int i=0; i<500; i++){
        if(num==1){
            break;
        }
        if(num%2==0){
            num=num/2;
            answer++;
        }
        else if(num%2==1){
            num=num*3+1;
            answer++;
        }
        if(i==499){
            answer=-1;
        }
    }
    return answer;
}