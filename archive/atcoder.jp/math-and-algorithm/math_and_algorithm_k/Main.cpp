#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N;
  int i,j;
  cin >> N;

  for(i=2;i<=N;i++){
    for(j=2;j<i;j++){
      if(i%j == 0) break;
    }
    if(j == i) cout << i << " ";
  }
  cout << endl;
}