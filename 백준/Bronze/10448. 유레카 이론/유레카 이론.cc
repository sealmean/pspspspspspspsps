#include <bits/stdc++.h>
using namespace std;
#define INF 1000000007

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        bool flag = false;
        for (int i = 1; i < n; ++i) {
            for (int j = i; j < n; ++j) {
                for (int h = j; h < n; ++h) {
                    if (((i*(i+1))/2)+((j*(j+1))/2)+((h*(h+1))/2) == n){
                        flag = true;
                        break; 
                    }   
                if (flag) break;
                }
            if (flag) break;
            }
        }
        if (flag) {
            cout<<1<<"\n";
        }else{
            cout<<0<<"\n";
        }
    }

    return 0;
}