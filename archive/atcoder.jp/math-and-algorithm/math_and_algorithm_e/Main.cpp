#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int A[N];
  int sum = 0;

  for(int i = 0;i<N;i++){
    cin >> A[i];
    sum += A[i];
  }

  cout << sum % 100 << endl;
  return 0;
}