#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;

    int y = 2024 + (8 + 7 * (n - 1)) / 12;
    int m = (8 + 7 * (n - 1)) % 12;
    if (m == 0) {
        m = 12;
        y--;
    }

    cout << y << " " << m << endl;
    return 0;
}
