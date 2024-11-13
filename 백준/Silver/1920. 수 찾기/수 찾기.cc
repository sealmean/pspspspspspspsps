#include <iostream>

#include <vector>

#include <algorithm>

using namespace std;

int binarySearch(const vector<int>& array, int x) {

    int start = 0, end = array.size() - 1;

    while (start <= end) {

        int middle = start + (end - start) / 2;

        if (x < array[middle]) {

            end = middle - 1;

        } else if (x == array[middle]) {

            return 1;

        } else {

            start = middle + 1;

        }

    }

    return 0;

}

int main() {

    ios_base::sync_with_stdio(false); // C와 C++ 표준 스트림을 분리

    cin.tie(NULL); // 입력 스트림의 묶음을 해제

    int n;

    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; ++i) {

        cin >> arr[i];

    }

    sort(arr.begin(), arr.end());

    int m;

    cin >> m;

    vector<int> arr2(m);

    for (int i = 0; i < m; ++i) {

        cin >> arr2[i];

    }

    for (int i = 0; i < m; ++i) {

        cout << binarySearch(arr, arr2[i]) << '\n';

    }

    return 0;

}

