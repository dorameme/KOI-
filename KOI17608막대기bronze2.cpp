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