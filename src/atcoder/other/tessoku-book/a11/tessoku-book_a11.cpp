#include<bits/stdc++.h>
using namespace std;

int n,x;

int nibutansaku(vector<int> &a){
  int L = 1;
  int R = n;

  while(L <= R){ // 探索範囲がなくなるまで
    int M = (L+R)/2;
    if(x < a[M]) R = M-1;
    if(x == a[M]) return M;
    if(x > a[M])  L = M+1;
  }
  return -1;
}

int main(){
  cin >> n >> x;
  vector<int> a(n+1);
  for(int i=1;i<=n;i++) cin >> a[i];

  cout << nibutansaku(a) << endl;

  return 0;
}