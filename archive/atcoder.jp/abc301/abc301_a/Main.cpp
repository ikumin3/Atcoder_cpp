#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  int A = 0,T = 0;

  cin >> N;
  cin >> S;

  int result = round((float)N / 2.0);
  for(int i=0;i<N;i++){
    if(S[i] == 'A'){
      A++;
    }else if (S[i] == 'T'){
      T++;
    }

    if(A >= result){
      cout << 'A' << endl;
      return 0;
    }else if (T >= result){
      cout << 'T' << endl;
      return 0;
    }
  }
  
  return 0;
}