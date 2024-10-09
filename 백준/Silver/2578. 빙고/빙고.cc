#include <bits/stdc++.h>
using namespace std;
#define INF 1000000007

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    vector<vector<int>> ls(5,vector<int>(5));

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin>>ls[i][j];
        }
    }

    int cnt = 0;
    int ans = 0;

    for (int t = 0; t < 25; ++t) {
        int b;
        cin>>b;

        for (int i = 0; i < 5; ++i) {
            for (int j = 0; j < 5; ++j) {
                if (b == ls[i][j]){
                    ls[i][j] = -1; //0,4
                    
                    bool garo = true;
                    for (int k = 0; k < 5; k++){
                        if (ls[i][k] != -1){
                            garo = false;
                            break;
                        }
                    }
                    bool sero = true;
                    for (int k = 0; k < 5; k++){
                        if (ls[k][j] != -1){
                            sero = false;
                            break;
                        }
                    }
                    bool daegak1 = false;
                    if (i == j){
                        daegak1 = true;
                        for (int k = 0; k < 5; ++k){
                            if (ls[k][k] != -1){
                                daegak1 = false;
                                break;
                            }
                        }
                    }

                    bool daegak2 = false;
                    if (i+j == 4){
                        daegak2 = true;
                        for (int k = 0; k < 5; ++k){
                            if (ls[k][4-k] != -1){
                                daegak2 = false;
                                break;
                            }
                        }
                    }

                    if (garo) cnt++;
                    if (sero) cnt++;
                    if (daegak1) cnt++;
                    if (daegak2) cnt++;

                    if (cnt >= 3){
                        cout<<t+1<<endl;
                        return 0;
                    }

                    break;
                }
            }
        }
    }

    return 0;
}