#include <bits/stdc++.h>
using namespace std;
#define INF 1000000007

int n;
vector<vector<int>> graph;
int mmax = 0;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void bfs(int a, int b, int rain, vector<vector<int>>& visited) {
    queue<pair<int, int>> q;
    q.push({a, b});
    visited[a][b] = 1;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
                if (graph[nx][ny] > rain && visited[nx][ny] == 0) {
                    visited[nx][ny] = 1;
                    q.push({nx, ny});
                }
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    graph.resize(n,vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> graph[i][j];
            mmax = max(mmax, graph[i][j]);
        }
    }

    int ans = 0;

    for (int i = 0; i < mmax; i++) {
        vector<vector<int>> visited(n, vector<int>(n, 0));
        int cnt = 0;

        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (graph[j][k] > i && visited[j][k] == 0) {
                    bfs(j, k, i, visited);
                    cnt++;
                }
            }
        }
        ans = max(ans, cnt);
    }

    cout << ans << "\n";
    return 0;
}