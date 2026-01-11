/*
    author: Osalotioman
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, r = 0, c = 0;
    cin >> n;
    while(n--){
        int a, b;
        cin >> a >> b;
        c += - a + b;
        r = (c > r ? c : r);
    }
    cout << r;
    return 0;
}