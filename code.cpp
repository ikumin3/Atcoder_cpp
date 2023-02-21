#include <bits/stdc++.h>

using namespace std;
int N,A[101];

int main() {
    cin >> N;
    for(int i=0;i<N;i++) cin >> A[i];
    sort(A,A+N,greater<int>());

    int v[2] = {0,0};
    for(int i=0;i<N;i++) v[i%2] += A[i];

    int ans = v[0] - v[1];
    cout << ans << endl;
    return 0;
}