#include<bits/stdc++.h>
using namespace std;

int main(){
  int h,w;
  cin >> h >> w;

  vector<vector<int>> x(h,vector<int>(w));
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      cin >> x.at(i).at(j);
    }
  }

  // 二次元累積和を計算する配列
  vector<vector<int>> s(h+1,vector<int>(w+1,0));
  for(int i=1; i<=h; i++){
    for(int j=1; j<=w; j++){
      s[i][j]=s[i][j-1]+x[i-1][j-1];
    }
  }
  for(int i=1; i<=w; i++){
    for(int j=1; j<=h; j++){
      s[j][i] += s[j-1][i];
    }
  }

  int q;
  cin >> q;

  for(int i=0; i<q; i++){
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int ans;
    ans = s[c][d]-s[c][b-1]-s[a-1][d]+s[a-1][b-1];
    cout << ans << endl;
  }
  return 0;
}