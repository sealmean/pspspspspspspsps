#include <bits/stdc++.h>
using namespace std;
#define INF 1000000007

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, m, j;
    cin >> n >> m;
    cin >> j;

    vector<int> ls(j);
    for (int i = 0; i < j; ++i) {
        cin >> ls[i];
    }

    int left = 1;
    int right = m;
    int ans = 0;

    for (int i : ls) {
        if (i < left) {
            ans += (left - i);
            right -= (left - i);
            left = i;
        } else if (i > right) {
            ans += (i - right);
            left += (i - right);
            right = i;
        }
    }

    cout << ans << "\n";

    return 0;
}