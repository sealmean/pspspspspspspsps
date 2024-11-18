
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    vector<pair<int, int>> p(n);

    for (int i = 0; i < n; ++i) {
        cin >> p[i].first >> p[i].second;
    }

    double res = DBL_MAX;
    pair<double, double> ans;

    for (int i = 0; i < n; ++i) {
        double mx = 0;

        for (int j = 0; j < n; ++j) {
            if (i == j) continue;
            double dx = p[i].first - p[j].first;
            double dy = p[i].second - p[j].second;
            double d = sqrt(dx * dx + dy * dy);
            mx = max(mx, d);
        }

        if (mx < res) {
            res = mx;
            ans = {p[i].first, p[i].second};
        }
    }

    cout << fixed << setprecision(6) << ans.first << " " << ans.second << endl;
    return 0;
}