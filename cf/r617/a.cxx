/*
    author: Osalotioman
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, s = 0;
    cin >> x;
    vector<int> st = {5, 4, 3, 2, 1};
    for(int i=0; i<5; ++i){
        s += (x - (x%st[i])) / st[i];
        x = x % st[i];
    }
    cout << s;
    return 0;
}