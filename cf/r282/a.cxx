/*
    author: Osalotioman
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, r = 0; cin >> t;
    while(t--){
        string s; 
        cin >> s;
        r += s[1] == '+' ? 1 : -1;
    }
    cout << r;
    return 0;
}