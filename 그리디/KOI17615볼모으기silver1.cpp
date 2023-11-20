/*
start:16:12
end:16:23
시간복잡도:O(N)
공간복잡도:O(N)
풀이: 밑에 써놈 네가지경우의 수에대해 모두구해 min 함수를 써줬음.
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int N;
string balls;
int leftR()
{
    int cnt=0;
    int idx=0;
    while(balls[idx]=='R')idx++;////일단 빨간공이 시작이면 안됨..파란공이 나올떄까지감. 왜냐! 그럼... 옮기는 의미가 없잖음
    for(int i=idx;i<N;i++){
        if(balls[i]=='R'){
            cnt++;
        }
    }
    return cnt;
}
int rightR()
{
    int cnt=0;
    int idx=N-1;
    while(balls[idx]=='R')idx--;
    for(int i=idx;i>=0;i--){
        if(balls[i]=='R'){
            cnt++;
        }
    }
    return cnt;
}
int leftB()
{
    int cnt=0;
    int idx=0;
    while(balls[idx]=='B')idx++;////일단 파란공이 시작이면 안됨..파란공이 나올떄까지감. 왜냐! 그럼... 옮기는 의미가 없잖음
    for(int i=idx;i<N;i++){
        if(balls[i]=='B'){
            cnt++;
        }
    }
    return cnt;
}
int rightB()
{
    int cnt=0;
    int idx=N-1;
    while(balls[idx]=='B')idx--;
    for(int i=idx;i>=0;i--){
        if(balls[i]=='B'){
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    cin >> N >> balls;
    cout << min({rightR(), leftR(), rightB(), leftB()});
}