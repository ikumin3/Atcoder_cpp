#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int A[N];
  int sum = 0;
  int ave =0;
  int ans = 0;

  for(int i = 0;i<N;i++){
    cin >> A[i];
    sum += A[i];
  }
  ave = round(double(sum) / double(N));

  for(int i=0;i<N;i++){
    ans += pow((ave - A[i]),2.0);
  }

  cout << ans << endl;
}