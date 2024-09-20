#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> t(n+1), p(n+1), dp(n+2, 0);
    
    for (int i = 1; i <= n; i++) {
        cin >> t[i] >> p[i];
    }

    for (int i = 1; i <= n; i++) {
        dp[i] = max(dp[i], dp[i-1]);
        if (i + t[i] - 1 <= n) {
            dp[i + t[i]] = max(dp[i + t[i]], dp[i] + p[i]);
        }
    }

    cout << max(dp[n], dp[n+1]) << "\n";

    return 0;
}
