/*
    author: Osalotioman
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc; 
    cin >> tc;
    while(tc--){
        string s;
        cin >> s;
        if(
            tolower(s[0]) == 'y' &&
            tolower(s[1]) == 'e' && 
            tolower(s[2]) == 's'
        ){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}