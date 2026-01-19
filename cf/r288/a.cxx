/*
    author: Osalotioman
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    set<int> s;
    int i;
    while(cin >> i){
        s.insert(i);
    }
    cout << 4-s.size();
    return 0;
}