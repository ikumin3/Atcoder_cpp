#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  string ans = "";

  cin >> str;
  for(int i=0;i<str.length();i++){
    switch(str[i]){
      case '0':
        ans += "0";
        break;
      case '1':
        ans += "1";
        break;
      case 'B':
      ans = ans.substr(0,ans.length() - 1);
      break;
    }
  }

  cout << ans;

}