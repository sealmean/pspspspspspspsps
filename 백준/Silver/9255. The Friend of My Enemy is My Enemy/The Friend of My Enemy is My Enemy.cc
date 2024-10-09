#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int k;
    cin >> k;
    
    for (int i = 0; i < k; ++i) {
        int n, m;
        cin >> n >> m;
        
        map<int, set<int>> friends;
        
        for (int i = 0; i < m; ++i) {
            int a, b;
            cin >> a >> b;
            friends[a].insert(b);
            friends[b].insert(a);
        }
        
        int s; 
        cin >> s;
        
        cout << "Data Set " << i + 1 << ":\n";
        
        if (friends.count(s)) {
            for (int friend_id : friends[s]) {
                cout << friend_id << " ";
            }
        }
        cout << "\n\n";
    }
    
    return 0;
}
