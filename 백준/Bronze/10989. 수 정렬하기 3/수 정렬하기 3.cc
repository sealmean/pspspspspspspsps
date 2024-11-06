#include <bits/stdc++.h>
using namespace std;
#define INF 1000000007

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    vector<int> ls(10001);
    int n;
    cin>>n;
    
    for (int i = 0; i < n; ++i) {
        int a;
        cin>>a;
        ls[a]++;
    }
    for (int i = 0; i < 10001; ++i) {
        if (ls[i] > 0){
            for (int j = 0; j < ls[i]; ++j) {
                cout<<i<<"\n";
            }
        }
    }

    return 0;
}