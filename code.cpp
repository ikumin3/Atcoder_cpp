#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,S;
  cin >> N >> S;

  vector<int> A(N);
  for(int i=0;i<N;i++) cin >> A.at(i);

  // 選ぶ/選ばないbit全探索
  for(int bit = 0;bit<(1<<N);++bit){
    int sum = 0;
    
    for(int i = 0;i<N;i++){
      if(bit&(1<<i)){
        sum+=A[i];
        if(sum > S) break;
      }
      if(sum == S){
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;
  return 0;
}