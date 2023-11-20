/*
start:13:50
end:13:55
시간복잡도:O(N)
공간복잡도:O(N)
풀이:스택으로 풀수도 있지만 배열에 넣어서 풀어도 된다.
간단하게 맨끝부터 봐서 나를 포함한 답 1 에서 나보다 큰애가 나올떄만 +1 씩해주면 된다.
*/
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int N,h,answer=1;
    cin >> N;
    stack<int> stk;
    for (int i = 0; i < N; ++i)
    {
        cin >>h;
        stk.push(h);
    }
    stk.pop();
    while(!stk.empty()){
        if(stk.top()>h)answer++;
        h=max(h,stk.top());
        stk.pop();
    }
    cout<<answer;
}