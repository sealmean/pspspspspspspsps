#include <bits/stdc++.h>
using namespace std;
#define INF 1000000007

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int> ls(n);
    for (int i = 0; i < n; ++i) {
        cin>>ls[i];
    }
    
    int min = -1;

    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            for (int h = j+1; h < n; ++h) {
                if ((ls[i]+ls[j]+ls[h] <= m) && (ls[i]+ls[j]+ls[h] > min)){
                    min = ls[i]+ls[j]+ls[h];
                }
            }
        }
    }
    cout<<min<<endl;

    return 0;
}