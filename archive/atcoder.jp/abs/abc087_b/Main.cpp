#include <bits/stdc++.h>
using namespace std;

int main() {
    int A,B,C,X;
    cin >> A >> B >> C >> X;

    int ans = 0;

    for(int i = 0;i<A + 1;i++){
            for(int j = 0;j<B + 1;j++){
                for(int k = 0;k<C + 1;k++){
                    if(i*500 + j*100 + k*50 == X) ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}