#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i=0;i<n;i++) cin >> a[i];

  int d;
  cin >> d;

  // 累積maxをもとめる。先頭からと末尾からの累積maxをそれぞれ求める。
  vector<int> lmax(n), rmax(n); // left max, right max
  lmax[0] = a[0];
  rmax[n-1] = a[n-1];
  for(int i=1;i<n;i++){
    lmax[i] = max(lmax[i-1], a[i]);
    rmax[n-1-i] = max(rmax[n-i], a[n-1-i]);
  }

  for(int i=0; i<d; i++){
    int l, r;
    cin >> l >> r;
    l--; r--; // indexに合わせる。
    cout << max(lmax[l-1], rmax[r+1]) << endl;
  }

  return 0;
}