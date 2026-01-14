/*
    author: Osalotioman
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, r = 1;
    cin >> n;
    string s1;
    for(int i=0; i<n; ++i){
        string s;
        cin >> s;
        if(i != 0){
            if(s1[1] == s[0]){
                // group formed
                ++r;
            }
        }
        s1 = s;
    }
    cout << r << '\n';
    return 0;
}