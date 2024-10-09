#include <bits/stdc++.h>
using namespace std;
#define INF 1000000007

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    vector<int> ls(21);

    for (int i = 0; i < 21; ++i) {
        ls[i] = i;
    }

    for (int i = 0; i < 10; ++i) {
        int a,b;
        cin>>a>>b;

        vector<int> tmp;

        for (int i = a; i < b+1; ++i) {
            tmp.push_back(ls[i]);
        }

        reverse(tmp.begin(),tmp.end());

        int tmp1 = 0;
        
        for (int i = a; i < b+1; ++i) {
            ls[i] = tmp[tmp1];
            tmp1++;
        }
        
        tmp.clear();
    }
    
    for (int i = 1; i < 21; ++i) {
        cout << ls[i] << " ";
    }
    return 0;
}