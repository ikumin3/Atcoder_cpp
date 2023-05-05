#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  char c;
  int count = 1;

  cin >> str;

  sort(str.begin(),str.end());

  for(int i=0;i<str.length();i++){
    if(str[i] == str[i+1]) count++;
    else if(count % 2 != 0){
      cout << "No" << endl;
      return 0;
    }else{
      count = 1;
    }
  }

  cout << "Yes" << endl;

}