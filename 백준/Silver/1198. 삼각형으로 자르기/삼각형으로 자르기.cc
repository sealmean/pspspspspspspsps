#include <bits/stdc++.h>
using namespace std;

double area(double x1, double y1, double x2, double y2, double x3, double y3) {
    return abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n;
    cin >> n;
    vector<pair<int, int>> ls(n);
    for(auto &p : ls) cin >> p.first >> p.second;

    double max_area = 0.0;
    
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            for(int k=j+1;k<n;k++) {
                double a = area(ls[i].first, ls[i].second, ls[j].first, ls[j].second, ls[k].first, ls[k].second);
                if(a > max_area) max_area = a;
            }
        }
    }
    cout << fixed << setprecision(10) << max_area;

    return 0;
}
