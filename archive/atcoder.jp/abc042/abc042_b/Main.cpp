#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,l;
  cin >> n >> l;

  vector<string> s(n);
  for(int i =0;i<n ;i++){
    cin >>s[i];
  }

  sort(s.begin(),s.end());

  string min;
  for(int i=0;i<n;i++){
    min += s[i];
  }

  cout << min << endl;

  return 0;
}