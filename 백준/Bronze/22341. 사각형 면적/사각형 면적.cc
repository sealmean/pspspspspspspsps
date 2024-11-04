#include <bits/stdc++.h>
using namespace std;
#define INF 1000000007

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, c;
    cin >> n >> c;
    
    int a = n, b = n;
    for (int i = 0; i < c; i++) {
        int x, y;
        cin >> x >> y;

        if (x >= a || y >= b) continue;

        int area_h = x * b;
        int area_v = a * y;

        if (area_h > area_v) {
            a = x;
        } else if (area_h < area_v) {
            b = y;
        } else {
            a = x;
        }
    }

    cout << a * b << "\n";

    return 0;
}
