#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  //10桁固定
  for(int i=0; i<10; i++){
    cout << int(n/pow(2,9-i))%2;
  }

  return 0;
}
