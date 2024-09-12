#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000009

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> arr(n + 1);
        
        if (n >= 1) arr[1] = 1;
        if (n >= 2) arr[2] = 2;
        if (n >= 3) arr[3] = 4;
        
        for (int i = 4; i <= n; ++i) {
            arr[i] = (arr[i - 1] + arr[i - 2] + arr[i - 3]) % MOD;
        }
        
        cout << arr[n] << "\n";
    }

    return 0;
}
