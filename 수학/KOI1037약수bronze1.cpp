/*
start:14:06
end:14:15
시간복잡도:O(N)
공간복잡도:O(N)
풀이: 정렬한 뒤 제일 큰값과 제일 작은값을 곱해준다. 그것이 답이된다.
*/
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int main(){
    int N;
    int num;
    vector <int> v;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>num;
        v.push_back(num);
    }
    sort(v.begin(),v.end());
    cout<<v[0]*v[v.size()-1];
}