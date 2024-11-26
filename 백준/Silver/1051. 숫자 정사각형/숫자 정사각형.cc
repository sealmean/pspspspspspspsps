#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m;
    cin>>n>>m;
    vector<string> grid(n);
    
    for(int i = 0; i < n; ++i){
        cin >> grid[i];
    }

    int max_side = min(n, m);
    int result = 1;
    for(int side = max_side; side >=1; --side){
        for(int i = 0; i + side -1 < n; ++i){
            for(int j = 0; j + side -1 < m; ++j){
                char c = grid[i][j];
                if(grid[i][j + side -1] == c && grid[i + side -1][j] == c && grid[i + side -1][j + side -1] == c){
                    result = side * side;
                    cout << result;
                    return 0;
                }
            }
        }
    }
    cout << result;
}
