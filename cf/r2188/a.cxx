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
        int n; 
        cin >> n;
        // Find median
        int m = ceil((float)n/2);
        int p1 = m, p2 = m + 1;
        for(int i=0; i<n; ++i){
            if(i % 2 == 0 && p1 != 0){
                cout << p1 << " ";
                --p1;
            }else if(i % 2 == 1){
                cout << p2 << " ";
                ++p2;
            }
        }
        //if(n %2 == 1){cout << n-1; }
        cout << '\n';
    }
    return 0;
}