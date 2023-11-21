#include <iostream>
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
        if(s[i]==bomb.back() && answer.size()>=bomb.size()){
            cout<<answer<<"\n";
            bool flag=true;
            for(int j=0;j<bomb.size();j++){
               if(answer[answer.size()-1-j]!=bomb[bomb.size()-1-j]){flag=false;break;}
            }
            if(flag){
                for(int j=0;j<bomb.size();j++){
                answer.pop_back();
                }
            }
        }
    }
    if(answer.empty())cout<<"FRULA";
    else cout<<answer;
}