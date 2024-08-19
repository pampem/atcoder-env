#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin >> n >> k;

  int count=0;

  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      if(k-i-j>0 && k-i-j<=n){
        count++;
      }
    }
  }
  cout << count << endl;
  return 0;
}
