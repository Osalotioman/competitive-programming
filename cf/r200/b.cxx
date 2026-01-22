/*
    author: Osalotioman
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; 
    double r = 0.0f;
    cin >> n;
    vector<double> p(n);
    for(int i=0; i<n; ++i){
        cin >> p[i];
        r += p[i];
    }
    r = r/(double)n;
    cout << setprecision(12);
    cout << r;
    return 0;
}