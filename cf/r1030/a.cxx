/*
    author: Osalotioman
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n;
    bool h = false;
    for(int i=0; i<n; ++i){
        cin >> x;
        if(x != 0){
            cout << "HARD";
            h = true;
            break;
        }
    }
    if(!h){
        cout << "EASY";
    }
    return 0;
}