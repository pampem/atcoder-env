#include<bits/stdc++.h>
using namespace std;

int main(){
  int d,n;
  cin >> d >> n;

  vector<int> s(d+1,0);
  for(int i=0; i<d; i++){
    int l,r;
    cin >> l >> r;
    // l日目からr日目まで参加する。
    for(int j=l; j<=r; j++){
      s[j]++;
    }
  }
  for(int i=1;i<=d;i++){
    cout << s[i] << endl;
  }
  return 0;
}