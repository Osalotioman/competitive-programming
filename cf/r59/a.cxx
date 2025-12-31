/*
    author: Osalotioman
*/

#include <bits/stdc++.h>
using namespace std;

int num_uc(string s){
  int r = 0;
  for(char v : s){
    if(isupper(v)){
        ++r;
    }
  }
  return r;
}

int num_lc(string s){
  int r = 0;
  for(char v : s){
    if(islower(v)){
        ++r;
    }
  }
  return r;
}

void lower_case(string &s){
  for(char &c : s){
    c = tolower(c);
  }
}

void upper_case(string &s){
  for(char &c : s){
    c = toupper(c);
  }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    //cout << "numlc: " <<  num_lc(s) << "; numuc: " << num_uc(s) << endl;
    if(num_lc(s) >= num_uc(s)){
      lower_case(s);
    }else{
      upper_case(s);
    }
    cout << s;
    return 0;
}