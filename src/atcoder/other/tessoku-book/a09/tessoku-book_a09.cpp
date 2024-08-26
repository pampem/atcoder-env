#include<bits/stdc++.h>
using namespace std;

int main(){
  int h,w,n;
  cin >> h >> w >> n;

  vector<vector<int>> s(h+2,vector<int>(w+2,0));
  for(int i=0;i<n;i++){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    
    s[a][b]++;
    s[c+1][d+1]++;
    s[a][d+1]--;
    s[c+1][b]--;
  }

  vector<vector<int>> ans(h+2,vector<int>(w+2,0));
  for(int i=1; i<=h; i++){
    for(int j=1; j<=w; j++){
      ans[i][j]=ans[i][j-1]+s[i][j];
    }
  }
  for(int i=1; i<=w; i++){
    for(int j=1; j<=h; j++){
      ans[j][i] += ans[j-1][i];
    }
  }
  for(int i=1; i<=h; i++){
    for(int j=1;j<=w;j++){
      if(j>=2) cout << " ";
      cout << ans[i][j];
    }
    cout << endl;
  }
  return 0;
}