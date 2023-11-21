/*
start:13:00
end:13:47
시간복잡도:O(NM)(s사이즈,bomb사이즈)
공간복잡도:O(N)
풀이:여러풀이가 있다..근데 이게 제일쉬운 풀이인것같다. ㅠㅠ
난이도에 비해 풀기 쉬운문제는 아니고 아이디어가 중요하다 나는 맨뒤에서 길이가 bombsize 이상일때 bomb이랑 맨끝이 같다면 계속 제거해주는 방식으로 풀었다.
*/ 
#include<iostream>
#include <string>
#include <stack>
using namespace std;
int main()
{
    string answer = "", s, bomb;
    cin >> s >> bomb;
    stack<int> stk;
    int idx = 0; // bomb인덱스
    for (int i = 0; i < s.size(); i++)
    {
        answer += s[i];
        if (s[i] == bomb.back() && answer.size() >= bomb.size())
        {
            bool flag = true;
            for (int j = 0; j < bomb.size(); j++)
            {
                if (answer[answer.size() - 1 - j] != bomb[bomb.size() - 1 - j])
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                for (int j = 0; j < bomb.size(); j++)
                {
                    answer.pop_back();
                }
            }
        }
    }
    if (answer.empty())
        cout << "FRULA";
    else
        cout << answer;
}