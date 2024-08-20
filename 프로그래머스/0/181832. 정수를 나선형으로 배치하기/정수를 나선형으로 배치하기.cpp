#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer(n,vector<int>(n,0));
    int count=1;
    int m=n;
    int x=0,y=-1;
    while(m>0){
        for(int i=0; i<m; i++){
            y+=1;
            answer[x][y]=count++;
        }
        m--;
        for(int i=0; i<m; i++){
            x+=1;
            answer[x][y]=count++;
        }
        for(int i=0; i<m; i++){
            y-=1;
            answer[x][y]=count++;
        }
        m--;
        for(int i=0; i<m; i++){
            x-=1;
            answer[x][y]=count++;
        }
    }
    return answer;
}