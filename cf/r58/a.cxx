/*
    author: Osalotioman
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, h = "hello";
    int i = 0;
    cin >> s;
    for(char v : s){
        if(v == h[i]){
            ++i;
        }
        if(i == h.size()){
            break;
        }
    }
    cout << (i == h.size() ? "YES" : "NO");
    return 0;
}