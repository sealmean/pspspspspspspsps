#include <bits/stdc++.h>
using namespace std;
#define INF 1000000007

int toggle(int k) {
    return k == 1 ? 0 : 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> ls(n);
    for (int i = 0; i < n; ++i) {
        cin >> ls[i];
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; ++i) {
        int gender, num;
        cin >> gender >> num;

        if (gender == 1) {
            for (int j = num - 1; j < n; j += num) {
                ls[j] = toggle(ls[j]);
            }
        }else{
            int left = num - 2;
            int right = num;
            ls[num - 1] = toggle(ls[num - 1]);

            while (left >= 0 && right < n && ls[left] == ls[right]) {
                ls[left] = toggle(ls[left]);
                ls[right] = toggle(ls[right]);
                left--;
                right++;
            }
        }
    }

    for (int i = 0; i < n; ++i) {

        cout << ls[i] << " ";
        
        if ((i + 1) % 20 == 0) cout << '\n';
    }

    return 0;
}