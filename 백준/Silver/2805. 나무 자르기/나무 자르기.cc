#include <bits/stdc++.h>
using namespace std;
#define INF 1000000007

int bs(vector<int>& ls, int a, int max_h){
    int s = 0;
    int e = max_h;

    while(s <= e){
        int m = (s + e) / 2;
        long long count = 0;
        for(int i : ls){
            if (i > m) {
                count += (long long)(i - m);
            }
        }
        
        if (count >= a){
            s = m + 1;
        } else{
            e = m - 1;
        }
    }
    return e;   
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int> ls(n);

    int max_h = 0;

    for (int i = 0; i < n; ++i) {
        cin >> ls[i];
        if(ls[i] > max_h) max_h = ls[i];
    }
    sort(ls.begin(), ls.end());

    cout << bs(ls, m, max_h) << endl;

    return 0;
}
