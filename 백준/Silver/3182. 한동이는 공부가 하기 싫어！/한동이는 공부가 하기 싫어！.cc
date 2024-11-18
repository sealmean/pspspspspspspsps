#include <bits/stdc++.h>
using namespace std;

int fun(vector<int>& ls, int start) {
    vector<bool> visited(ls.size(), false);
    int count = 0;
    int now = start;

    while (!visited[now]) {
        visited[now] = true;
        count++;
        now = ls[now];
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> ls(n);
    for (int i = 0; i < n; ++i) {
        cin >> ls[i];
        ls[i] -= 1; 
    }

    int mmax = 0;
    int ans = 0;

    for (int i = 0; i < n; ++i) {
        int count = fun(ls, i);
        if (count > mmax || (count == mmax && i < ans)) {
            mmax = count;
            ans = i;
        }
    }

    cout << ans + 1 << endl;
    return 0;
}
