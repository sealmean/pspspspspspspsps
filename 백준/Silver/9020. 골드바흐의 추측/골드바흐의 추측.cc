#include <bits/stdc++.h>
using namespace std;
#define INF 1000000007

void Eratosthenes(int *arr, int n) {
    int i, j;

    for (i = 2; i <= n; ++i) arr[i] = 1; // 0과 1을 제외한 모든 수를 소수로 초기화
    arr[0] = arr[1] = 0; // 0과 1은 소수가 아님

    for (i = 2; i * i <= n; ++i) {
        if (arr[i] == 0)
            continue;
        for (j = i * 2; j <= n; j += i)
            arr[j] = 0; // 소수가 아닌 수 제거
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int limit = 1000000;
    int* prime = new int[limit + 1];

    // 에라토스테네스의 체를 사용해 소수를 찾음
    Eratosthenes(prime, limit);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int best_a = 0, best_b = 0, min_diff = INF;

        // 가능한 모든 소수 쌍 탐색
        for (int i = 2; i <= n / 2; ++i) {
            if (prime[i] && prime[n - i]) {
                int diff = abs((n - i) - i);  // 소수 쌍의 차이 계산

                // 두 소수의 차이가 더 작은 경우 갱신
                if (diff < min_diff) {
                    best_a = i;
                    best_b = n - i;
                    min_diff = diff;
                }
            }
        }

        // 찾은 소수 쌍 출력
        if (best_a && best_b) {
            cout << best_a << " " << best_b << "\n";
        }
    }

    // 동적 메모리 해제
    delete[] prime;

    return 0;
}
