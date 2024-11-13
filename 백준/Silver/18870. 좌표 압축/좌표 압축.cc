#include <bits/stdc++.h>
using namespace std;
#define INF 1000000007

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin>>n;
    vector<int> ls(n);
    for (int i = 0; i < n; ++i) {
        cin>>ls[i];
    }
    set<int> set_ls(ls.begin(), ls.end());
    vector<int> sort_ls(set_ls.begin(), set_ls.end());
    for (int i = 0; i < n; ++i) {
        cout << lower_bound(sort_ls.begin(), sort_ls.end(), ls[i]) - sort_ls.begin() << ' ';
    }
    return 0;
}