#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m, t;
    cin >> n >> m >> t;

    vector<pair<int, int>> table(n);
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        table[i] = {a, b};
    }

    vector<int> time_changes(t + 1, 0);

    for (int i = 0; i < m; ++i) {
        int c, d;
        cin >> c >> d;
        --c;  // 1-based index to 0-based index
        --d;  // 1-based index to 0-based index

        int start = max(table[c].first, table[d].first);  // 더 늦게 입장한 시간
        int end = min(table[c].second, table[d].second);  // 더 일찍 퇴장한 시간

        if (start < end) {
            time_changes[start] += 1;
            if (end < t) {
                time_changes[end] -= 1;
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < t; ++i) {
        ans += time_changes[i];
        cout << ans << "\n";
    }

    return 0;
}
