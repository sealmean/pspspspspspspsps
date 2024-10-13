#include <bits/stdc++.h>
using namespace std;
#define INF 1000000007

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N, M;
    cin >> N >> M;

    int r, c, d;
    cin >> r >> c >> d;

    int room[50][50];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> room[i][j];
        }
    }

    int dr[4] = {-1, 0, 1, 0}; // 북, 동, 남, 서
    int dc[4] = {0, 1, 0, -1}; // 북, 동, 남, 서

    int cleaned_count = 0;
    int turn_count = 0;

    while (true) {
        if (room[r][c] == 0) {
            room[r][c] = 2; // 청소 완
            cleaned_count++;
        }

        bool cleaned = false;
        for (int i = 0; i < 4; ++i) {
            d = (d + 3) % 4; // 반시계 90도 회전
            int nr = r + dr[d];
            int nc = c + dc[d];
            if (room[nr][nc] == 0) {
                r = nr;
                c = nc;
                cleaned = true;
                break;
            }
        }

        if (!cleaned) {
            int back_d = (d + 2) % 4; // 후진 방향
            int nr = r + dr[back_d];
            int nc = c + dc[back_d];
            if (room[nr][nc] == 1) {
                break; // 후진 불가 멈춤
            }
            r = nr;
            c = nc; 
        }
    }

    cout << cleaned_count << endl;
    return 0;
}