/*
    author: Osalotioman
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c = 0;
    cin >> a >> b;
    while(a <= b){
        a *= 3;
        b *= 2;
        ++c;
    }
    cout << c;
    return 0;
}

/*
// Alternatively --- not yet working
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    float k = log(b/a)/log(1.5);
    if(ceil(k) != k){
        cout << ceil(k);
    }else{
        cout << k+1;
    }
    return 0;
}
*/