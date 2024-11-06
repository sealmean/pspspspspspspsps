#include <bits/stdc++.h>
using namespace std;
#define INF 1000000007

vector<vector<int>> graph(5, vector<int>(5));
set<int> ans;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void bfs(int a, int b) {
    queue<tuple<int, int, string>> q;
    q.push({a, b, to_string(graph[a][b])});

    while (!q.empty()) {
        auto [x, y, n] = q.front();
        q.pop();

        if (n.length() == 6) {
            ans.insert(stoi(n));
            continue;
        }

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && nx < 5 && ny >= 0 && ny < 5) {
                q.push({nx, ny, n + to_string(graph[nx][ny])});
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> graph[i][j];
        }
    }

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            bfs(i, j);
        }
    }

    cout << ans.size() << endl;
    return 0;
}
