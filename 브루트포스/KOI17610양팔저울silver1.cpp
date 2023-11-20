/*
start:15:51
end:16:00
시간복잡도:O(3^N)
공간복잡도:O(N)
풀이: 메소드를 하나만들어 세가지 경우로 나누어서 풀어준다. 1.값을 더하지도 뺴지도 않는다 2.값을 더해준다 3.값을 뺴준다.
*/
#include <iostream>
#include <vector>
using namespace std;
int answer[13 * 200001];
int k,answerCnt;
int g[13];
int total;
void solve(int idx, int weight)
{
    if (weight > 0 && answer[weight]==0){
        answer[weight] = 1;
        total--;
    }
    if (idx >= k)
        return;
    solve(idx + 1, weight);
    solve(idx + 1, weight + g[idx]);
    solve(idx + 1, weight - g[idx]);
}
int main()
{
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> g[i];
        total += g[i];
    }
    solve(0, 0);
    cout << total;
}