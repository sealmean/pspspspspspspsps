#include <bits/stdc++.h>
using namespace std;
#define INF 1000000007

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int t;
    cin >> t;
    
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        int max_val = n;
        while (n != 1) {
            if (n % 2 == 0) {
                n /= 2;
            } else {
                n = n * 3 + 1;
            }
            if (n > max_val) max_val = n;
        }
        cout << max_val << "\n";
    }

    return 0;
}
