#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  bool end = true;

  for(auto& a : A){
    cin >> a;
  }

  for(int i=0;i<N;i++){
    if(abs(A[i] - A[i+1]) != 1){
      end = false;
    }

    if(!end){
      for(int j = 0;j<N;i++){
        if(A[i] < A[i+1]){
          A.insert(i+1,A[i]);
        }
      }
    }
  }
}