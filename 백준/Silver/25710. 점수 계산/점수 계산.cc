#include <bits/stdc++.h>
using namespace std;
#define INF 1000000007

int fun(int a){
    int ans = 0;
    while (a != 0){
        ans = ans + a%10;
        a = a/10;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin>>n;
    vector<int> ls(1000,0);
    for (int i = 0; i < n; ++i) {
        int a;
        cin>>a;
        ls[a]++;
    }

    int mmax = 0;
    for (int i = 0; i < 1000; ++i) {
        for (int j = i; j < 1000; ++j) {
            if (ls[i]*ls[j] != 0){
                if (i==j && ls[i] == 1) continue;
                mmax = max(fun(i*j),mmax);
            }
        }
    }
    cout<<mmax<<endl;

    return 0;
}