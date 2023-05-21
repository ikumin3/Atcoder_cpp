#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0;i<(n);++i)

// 方向を決めるために使用する
int di[] = {-1,-1,-1,0,0,1,1,1};
int dj[] = {-1,0,1,-1,1,-1,0,1};

int main() {
  int H,W;
  cin >> H >> W;
  vector<string> S(H);

  rep(i,H) cin >> S[i];
  string T = "snuke";

  rep(si,H) rep(sj,W){
    rep(v,8){ // 8方向検査
      int i=si,j=sj;
      rep(k,5){ // 5個並んでいるか検査
        if(i<0 || j<0 || i>=H || j>=W) break; // 範囲外
        if(S[i][j] != T[k]) break; // 違う文字
        if(k == 4){ // 最終的に4回ここにたどり着いた成功
          i = si; j = sj;
          rep(nk,5){ // 成功なので出力
            cout << i+1 << j+1 << endl;
            i += di[v]; j+= dj[v];
          }
          return 0;
        }
        i += di[v]; // 進む方向に値を変更する
        j += dj[v];
      }
    }
  }

  return 0;
}