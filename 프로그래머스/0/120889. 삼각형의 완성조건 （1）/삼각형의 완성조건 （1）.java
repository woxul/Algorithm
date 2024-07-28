class Solution {
    public int solution(int[] sides) {
        int max=-1;
        int a=0;
        int answer;
        for(int i=0; i<3; i++){
            if (max<sides[i]){
                max=sides[i];
            }
            a+=sides[i];
        }
        if(a-max>max){
            answer=1;
        }
        else{
            answer=2;
        }
        return answer;
    }
}