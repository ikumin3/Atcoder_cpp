#include <bits/stdc++.h>
using namespace std;

int main() {
  long long A,B;
  long attack = 0;
  cin >> A >> B;

  attack =  A / B;
  if(A%B>0) attack++;
  cout << attack << endl;
}