#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,S;
  int result = 0;
  cin >> N >> S;

  for(int i=1;i<=N;i++){
    for(int j=1;j<=N;j++){
      if(i+j <= S) result++;
    }
  }

  cout << result << endl;

  return 0;
}