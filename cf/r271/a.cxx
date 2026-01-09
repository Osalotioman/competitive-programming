/*
    author: Osalotioman
*/

#include <bits/stdc++.h>
using namespace std;

bool distinct_digits(int v){
    string s = to_string(v);
    for(int i=0; i<4; ++i){
        for(int j=0; j<4; ++j){
            if(i != j && s[i] == s[j]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int y;
    cin >> y;
    for(int i=y+1; ; ++i){
        if(distinct_digits(i)){
            cout << i;
            break;
        }
    }
    return 0;
}
