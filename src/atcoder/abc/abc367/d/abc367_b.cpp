#include <bits/stdc++.h>
using namespace std;

int main() {
  double x;
  cin >> x;

  x = x * 1000;
  int xi = static_cast<int>(x); // 整数部分にキャスト

  if (xi % 10 != 0) { // 一桁目が0でないとき
    cout << x / 1000 << endl;
  } else if (xi % 100 != 0) { // 二桁目が0でないとき
    printf("%.2f\n", x / 1000.0);
  } else if (xi % 1000 != 0) { // 三桁目が0でないとき
    printf("%.1f\n", x / 1000.0);
  } else {
    printf("%.0f\n", x / 1000.0);
  }

  return 0;
}
