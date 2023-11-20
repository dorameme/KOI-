/*
start:14:06
end:
시간복잡도:
공간복잡도:
풀이:
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