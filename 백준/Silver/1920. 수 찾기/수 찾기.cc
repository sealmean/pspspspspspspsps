#include <bits/stdc++.h>
using namespace std;
#define INF 1000000007

bool bs(vector<int>& ls, int a){
    int s = 0;
    int e = ls.size()-1;

    while(s<=e){
        int m = (s+e)/2;
        if (a<ls[m]){
            e = m-1;
        } else if (a == ls[m]) {
            return true;
        } else {
            s = m+1;
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin>>n;
    vector<int> ls(n);

    for (int i = 0; i < n; ++i) {
        cin>>ls[i];
    }

    sort(ls.begin(),ls.end());
    int m1;
    cin>>m1;
    vector<int> ls2(m1);

    for (int i = 0; i < m1; ++i) {
        cin >> ls2[i];
    }

    for (int i:ls2) {
        cout<< bs(ls,i) <<'\n';
    }

    return 0;
}