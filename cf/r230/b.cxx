 /*
    author: Osalotioman
*/

#include <bits/stdc++.h>
using namespace std;

bool isPrimeSquare(long long v);
bool isPrime(long long i);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    for(long long i=0; i<n; ++i){
        long long v;
        cin >> v;
        if(isPrimeSquare(v)){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}

bool isPrimeSquare(long long v){
    if(v == 1){return false;}
    long long i = ceil(sqrt(v));
    if(i * i != v){ return false; }
    if(!isPrime(i)){ return false; }
    return true;
}

bool isPrime(long long i){
    for(long long j=2; j<=sqrt(i); ++j){
        if(i % j == 0){
            return false;
        }
    }
    return true;
}