#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> ls(n);
    for (int i = 0; i < n; ++i) {
        cin >> ls[i];
    }

    sort(ls.begin(), ls.end());
    unordered_map<int, int> count;
    int ans = 0;

    for (int i = 0; i < n; ++i) {
        count[ls[i]] += 1;
    }

    for (int i = 0; i < n; ++i) {
        if (count[ls[i]] == 0) continue;

        int left = 0, right = n - 1;
        while (left < right) {
            if (left == i) {
                left++;
            } else if (right == i) {
                right--;
            } else {
                int two_sum = ls[left] + ls[right];
                if (two_sum == ls[i]) {
                    ans += 1;
                    count[ls[i]] -= 1;
                    break;
                } else if (two_sum < ls[i]) {
                    left++;
                } else {
                    right--;
                }
            }
        }
    }

    cout << ans << '\n';

    return 0;
}
