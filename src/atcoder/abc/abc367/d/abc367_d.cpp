#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> prefix_sum(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        prefix_sum[i + 1] = prefix_sum[i] + a[i];
    }

    unordered_map<int, int> remainder_count;
    int total_count = 0;

    for (int i = 0; i < n; ++i) {
        int remainder = prefix_sum[i + 1] % m;
        if (remainder < 0) remainder += m;

        // 余りが同じであれば、それまでの区間和はMの倍数
        if (remainder_count.find(remainder) != remainder_count.end()) {
            total_count += remainder_count[remainder];
        }

        remainder_count[remainder]++;
    }

    // 最後に、すべての start 位置に対して考慮
    for (int start = 1; start < n; ++start) {
        remainder_count.clear();
        remainder_count[0] = 1;  // 余りが0の初期化
        for (int i = start, j = 1; j <= n; ++i, ++j) {
            int remainder = (prefix_sum[i % n + 1] - prefix_sum[start - 1]) % m;
            if (remainder < 0) remainder += m;
            total_count += remainder_count[remainder];
            remainder_count[remainder]++;
        }
    }

    cout << total_count << endl;

    return 0;
}
