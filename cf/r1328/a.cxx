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
        int a, b, r = 0;
        cin >> a >> b;
        // we need to find k such that (a + k) % b == 0
        // a + k == 0 (mod b)
        // a == -k (mod b)
        // a == b-k (mod b)
        // a == m (mod b)
        cout << (a % b != 0 ? b - (a % b) : 0) << '\n';
    }
    return 0;
}