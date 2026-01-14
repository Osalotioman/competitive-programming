/*
    author: Osalotioman
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, r = 0;
    cin >> n;
    while(n--){
        int a, b;
        cin >> a >> b;
        r += (b-a > 1 ? 1 : 0);
    }
    cout << r;
    return 0;
}