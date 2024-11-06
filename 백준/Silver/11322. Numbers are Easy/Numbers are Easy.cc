#include <bits/stdc++.h>
using namespace std;
#define INF 1000000007

void bfs(int n) {
    queue<pair<string, int>> q;
    vector<bool> vis(n, false);
    
    q.push({"1", 1 % n});
    vis[1 % n] = true;

    while (!q.empty()) {
        auto [s, r] = q.front();
        q.pop();

        if (r == 0) {
            cout << s << "\n";
            return;
        }

        int r0 = (r * 10) % n;
        int r1 = (r * 10 + 1) % n;

        if (!vis[r0]) {
            q.push({s + "0", r0});
            vis[r0] = true;
        }
        if (!vis[r1]) {
            q.push({s + "1", r1});
            vis[r1] = true;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        bfs(n);
    }

    return 0;
}
