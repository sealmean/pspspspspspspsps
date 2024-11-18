#include <bits/stdc++.h>
using namespace std;

void fun(string aa, vector<int>& numls, vector<char>& ls, vector<string>& results, int n) {
    if (aa.length() == n + 1) { 
        results.push_back(aa);
        return;
    }

    for (int i = 0; i < numls.size(); ++i) {
        if (numls[i] == -1) continue;
        if (aa.empty() || 
            (ls[aa.length() - 1] == '>' && (aa.back() - '0') > numls[i]) || 
            (ls[aa.length() - 1] == '<' && (aa.back() - '0') < numls[i])) {
            
            int temp = numls[i];
            numls[i] = -1; 
            fun(aa + (char)(temp + '0'), numls, ls, results, n);
            numls[i] = temp;
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<char> ls(n);
    for (int i = 0; i < n; ++i) {
        cin >> ls[i];
    }

    vector<int> numls(10);
    for (int i = 0; i < 10; ++i) {
        numls[i] = i;
    }

    vector<string> results;
    fun("", numls, ls, results, n);

    sort(results.begin(), results.end());
    cout << results.back() << '\n'; 
    cout << results.front() << '\n';

    return 0;
}
