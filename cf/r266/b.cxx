/*
    author: Osalotioman
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, t;
    string s;
    bool js = false;
    cin >> n >> t >> s;
    while(t--){
        for(int i=1; i<n; ++i){
            if(s[i] == 'G' && s[i-1] == 'B' && !js){
                s[i-1] = 'G';
                s[i] = 'B';
                js = true;
            }else if(js){
                js = false;
            }
        }
        js = false;
    }
    cout << s;
    return 0;
}