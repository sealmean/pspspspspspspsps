#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n,k;
    cin>>n>>k;
    vector<int> ls(n);

    for (int i = 0; i < n; ++i) {
        cin>>ls[i];
    }

    vector<int> dp(k + 1,INT_MAX);
    dp[0] = 0;
    
    for (int tmp : ls) {
        for (int i = tmp; i <= k; i++) {
            if (dp[i - tmp] != INT_MAX) {
                dp[i] = min(dp[i], dp[i - tmp] + 1);
            }
        }
    }

    cout << (dp[k] == INT_MAX ? -1 : dp[k]) << endl;

    return 0;
}