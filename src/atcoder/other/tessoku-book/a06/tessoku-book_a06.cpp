#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,q;
  cin >> n >> q;

  vector<int> a(n);
  for(int i=0; i<n; i++){
    cin >> a[i];
  }

  //累積和の計算
  vector<int> s(n+1,0);
  for(int i=0; i<n; i++){
    s[i+1] = s[i] + a[i];
  }

  for(int i=0; i<q; i++){
    int l,r;
    cin >> l >> r;
    cout << s[r] - s[l-1] << endl;
  }

  return 0;
}