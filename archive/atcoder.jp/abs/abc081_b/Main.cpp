#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;

  vector<int> A(N);
  int count = 0;
  bool isEven = true;

  cin >> N;

  for(int i = 0;i<N;i++){
    cin >> A[i]; 
  }

  while(isEven){
    for(int i = 0;i<N;i++){
      if(A[i] % 2 != 0){
        isEven = false;
        break;
      }
    }
    if(!isEven){
      break;
    }
    else{
      for(int i = 0;i<N;i++){
        A[i] = A[i] / 2;
      }
    }
    count++;
  }


  cout << count << endl;

  return 0;
}