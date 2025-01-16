#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin>>n;

    vector<vector<int>> ls(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> ls[i][j];
        }
    }

    int q;
    cin >> q;
    vector<string> ops(q);

    for (int i = 0; i < q; i++) {
        cin >> ops[i];
        
        if (ops[i][0] == '1') {
            int index;
            cin >> index;
            index--;
            int last = ls[index][n - 1];
            for (int j = n - 1; j > 0; j--) {
                ls[index][j] = ls[index][j - 1];
            }
            ls[index][0] = last;
        } else if (ops[i][0] == '2') {
            vector<vector<int>> temp(n, vector<int>(n));
            for (int x = 0; x < n; x++) {
                for (int y = 0; y < n; y++) {
                    temp[y][n - x - 1] = ls[x][y];
                }
            }
            ls = temp;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << ls[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}