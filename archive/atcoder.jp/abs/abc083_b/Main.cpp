#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,n;
    int sum = 0;

    cin >> n >> a >> b;

    for(int i = 1;i<= n; i++){
        int temp = i;
        int sumTemp = 0;

        /* 各桁の和を算出 */
        while(temp!=0){
            sumTemp += temp % 10;
            temp /= 10;
        }
        if(a <= sumTemp && sumTemp <= b){
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}