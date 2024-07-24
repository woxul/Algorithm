class Solution {
    public int solution(int n) {
        int answer = 0;
        int answer1 = 0;
        for(int i=0; i<=n; i++){
            if(i%2==0){
                answer+=i*i;
            }
            else{
                answer1+=i;
            }
        }
        if(n%2==0){
            return answer;
        }
        else{
            return answer1;
        }
    }
}