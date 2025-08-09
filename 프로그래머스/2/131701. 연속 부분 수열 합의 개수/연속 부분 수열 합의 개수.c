#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// elements_len은 배열 elements의 길이입니다.
int solution(int elements[], size_t elements_len) {
    int answer = 0;
    int mem[1000010] = {0,};
    for(int i=1;i<=elements_len;i++)
    {
        for(int j=0;j<elements_len;j++)
        {
            int sum=0;
            for(int k=j;k<j+i;k++)
            {
                sum+=elements[k%elements_len];
            }
            if(mem[sum]==0)
            {
                answer++;
                mem[sum]=1;
            }
        }
    }
    return answer;
}