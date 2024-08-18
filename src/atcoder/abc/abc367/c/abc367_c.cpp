#include <bits/stdc++.h>
using namespace std;

// 再帰的に全ての組み合わせを生成
void generateSequences(vector<int>& r, int k, vector<int>& current, int index, vector<vector<int>>& results) {
  if (index == r.size()) {
    int sum = accumulate(current.begin(), current.end(), 0);
    if (sum % k == 0) {
      results.push_back(current);
    }
    return;
  }
  
  // i番目の要素を1からr[index]までの全ての値で試す
  for (int i = 1; i <= r[index]; i++) {
    current.push_back(i);
    generateSequences(r, k, current, index + 1, results);
    current.pop_back();
  }
}

void findSequences(vector<int>& r, int k) {
  vector<vector<int>> valid_sequences;
  vector<int> current;
  generateSequences(r, k, current, 0, valid_sequences);

  sort(valid_sequences.begin(), valid_sequences.end());

  for (const auto& sequence : valid_sequences) {
    for (int i = 0; i < sequence.size(); i++) {
      cout << sequence[i];
      if (i != sequence.size() - 1) {
        cout << " ";
      }
    }
    cout << endl;
  }
}

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> r(n);
  for (int i = 0; i < n; i++) {
    cin >> r[i];
  }

  findSequences(r, k);

  return 0;
}
