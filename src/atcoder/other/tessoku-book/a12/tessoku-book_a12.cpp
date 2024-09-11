#include<bits/stdc++.h>
using namespace std;

// 答えで二分探索する。まず1~10^9の配列で二分探索を行い、それぞれに対して印刷枚数がkを超えているかの関数でCheckする。
// check: i=1~nでfor。c秒後における、printedの数を求め、ifでtrue or false。

bool check(long long c, vector<int> &a, int n, long long k){
  long long printed = 0;
  for(int i=1;i<=n;i++){
    printed += c/a[i]; // これは小数切り捨て。
  }
  if(printed >= k) return true;
  return false;
}

int main(){
  int n;
  long long k;
  cin >> n >> k;
  vector<int> a(n+1);
  for(int i=1;i<=n;i++) cin >> a[i];

  long long left = 1;
  long long right = 1'000'000'000;
  while(left<right){
    long long m = (left + right)/2;
    if(check(m, a, n, k)==false) left = m+1;
    else right = m;
  }

  cout << left << endl; // left = rightなので、rightを出力してもよい。

  return 0;
}