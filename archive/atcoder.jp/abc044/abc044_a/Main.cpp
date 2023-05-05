#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,K,X,Y;
  int sum = 0;

  cin >> N;
  cin >> K;
  cin >> X;
  cin >> Y;

  for (int i=1;i<=N;i++){
    if(i > K){
      sum += Y;
    }else{
      sum += X;
    }
  }

  cout << sum << endl;
}