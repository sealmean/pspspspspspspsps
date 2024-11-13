#include <bits/stdc++.h>
using namespace std;
#define INF 1000000007

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;
    long long c;
    cin >> n >> c;
    vector<long long> ls(n);

    for (int i = 0; i < n; i++){
        cin >> ls[i];
    }
    sort(ls.begin(), ls.end());

    if (binary_search(ls.begin(), ls.end(), c)){
        cout << "1";
        return 0;
    }

    long long lo = 0, hi = n - 1;
    bool flag = false;

    while (lo < hi){
        long long sum = ls[lo] + ls[hi];
        if (sum == c){
            flag = true;
            break;
        }else if (sum < c){
            lo++;
        }else{
            hi--;
        }
    }
    if (flag){
        cout << 1 << endl;
        return 0;
    }

    for (int i = 0; i < n - 2; i++)
    {
        long long tmp = c - ls[i];
        long long j = i + 1, k = n - 1;
        while (j < k)
        {
            long long sum = ls[j] + ls[k];
            if (sum == tmp){
                cout << "1";
                return 0;
            } else if (sum < tmp){
                j++;
            } else{
                k--;
            }
        }
    }
    cout << 0 << endl;
    return 0;
}