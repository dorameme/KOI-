/*
start:14:37
end:14:44
시간복잡도:O(N)
공간복잡도:O(N)
풀이:기준문자열로 처음문자열을 잡고 각 문자열 자리가 다른지 같은지 비교해준다.
만일 다르다면 기준문자열의 그 부분을 ? 로 바꾸어준다.
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int N;
    string str,firstStr;
    cin >> N>>firstStr;
    for (int i = 1; i < N; i++)
    {
        cin >> str;
        for(int j=0;j<str.size();j++){
            if(str[j]!=firstStr[j]){firstStr[j]='?';}
        }
    }
    cout<<firstStr;
}