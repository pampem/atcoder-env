#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c;
  cin >> a >> b >> c;

  if(b>c){
    if(b<=a && a<=24){
      cout << "No" << endl;
    }else if(0<=a && a<=c){
      cout << "No" << endl;
    }else{
      cout << "Yes" << endl;
    }
  }
  if(c>b){
    if(b<=a && a<=c){
      cout << "No" << endl;
    }else{
      cout << "Yes" << endl;
    }
  }

  return 0;
}
