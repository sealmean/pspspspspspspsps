#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, s, e;
    cin >> n >> m >> s >> e;

    vector<vector<double>> dp(n + 1, vector<double>(m + 1, 0.0));
    dp[s][0] = 1.0;

    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (j == 1) {
                dp[j][i] = (dp[j + 1][i - 1] + (n - 2) * dp[j][i - 1]) / (n - 1);
            } else if (j == n) {
                dp[j][i] = (dp[j - 1][i - 1] + (n - 2) * dp[j][i - 1]) / (n - 1);
            } else {
                dp[j][i] = (dp[j - 1][i - 1] + dp[j + 1][i - 1] + (n - 3) * dp[j][i - 1]) / (n - 1);
            }
        }
    }

    long double result = dp[e][m];

    if (result == static_cast<int>(result)) {
        cout << static_cast<int>(result) << "\n";
    } else {
        cout << result << "\n";
    }

    return 0;
}
