#include<bits/stdc++.h>
using namespace std;

int main(){
  int d,n;
  cin >> d >> n;

  vector<int> s(d+1,0);
  for(int i=0; i<n; i++){
    int l,r;
    cin >> l >> r;
    // l日目からr日目まで参加する。
    // 出席者の前日比記録を作る。
    s[l]++;
    s[r+1]--;
  }
  int tmp=0;
  for(int i=1;i<=d;i++){
    int ans = s[i]+tmp;
    cout << ans << endl;
    tmp = ans;
  }
  return 0;
}