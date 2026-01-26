/*
    author: Osalotioman
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string r = "", v1 = "I hate", v2 = "I love", v3 = " that ", v4 = " it";
    int k = 1;
    for(int i=0; i<n; ++i){
        if(i % 2 == 0 && i != n-1){
            r += v1+v3;
            k = 2;
        }else if(i % 2 == 1 && i != n-1){
            r += v2+v3;
            k = 3;
        }else if(i == n-1){
            if(k == 1){
                r += v1+v4;
            }else if(k == 2){
                r += v2+v4;
            }else if(k == 3){
                r += v1+v4;
            }
        }
    }
    cout << r;
    return 0;
}