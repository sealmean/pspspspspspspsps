#include <stdio.h>
#include <vector>

using namespace std;

int n, m, t;

int main() {
    scanf("%d%d%d", &n, &m, &t);
    
    // 각 시간대별로 회의에 참석하는 사람을 저장할 벡터
    vector<vector<int>> in(t + 1);
    
    // 각 시간대별로 회의에서 떠나는 사람을 저장할 벡터
    vector<vector<int>> out(t + 1);
    
    // 각 사람의 친구 관계를 저장할 인접 리스트
    vector<vector<int>> friends(n + 1);
    
    for (int i = 1 ; i <= n ; ++i) {
        int a, b;
        scanf("%d%d", &a, &b);
        in[a].push_back(i);
        out[b].push_back(i);
    }
    
    while (m--) {
        int u, v;
        scanf("%d%d", &u, &v);
        friends[u].push_back(v);
        friends[v].push_back(u);
    }
    
    // 현재 회의에 참석 중인 사람을 표시하는 배열
    vector<bool> joined(n + 1, false);

    // 현재 친구 관계 쌍의 총 수
    int total_relations = 0;

    for (int i = 0; i < t; ++i) {
        // 현재 시간에 회의에서 떠나는 사람들 처리
        for (auto u : out[i]) {
            joined[u] = false; // 사람이 회의에서 떠남
            
            // 친구 목록을 순회하며 현재 회의에 참석 중인 친구를 찾음
            for (auto v : friends[u]) {
                if (joined[v]) {
                    --total_relations; // 친구 쌍의 수 감소
                }
            }
        }
        
        // 현재 시간에 회의에 참석하는 사람들 처리
        for (auto u : in[i]) {
            joined[u] = true; // 사람이 회의에 참석
            
            // 친구 목록을 순회하며 현재 회의에 참석 중인 친구를 찾음
            for (auto v : friends[u]) {
                if (joined[v]) {
                    ++total_relations; // 친구 쌍의 수 증가
                }
            }
        }
        
        // 현재 시간에 친구 관계 쌍의 총 수를 출력
        printf("%d\n", total_relations);
    }
}
//시뮬레이션으로 가능한지 테스트 출처: https://www.ohnimdev.com/entry/백준-31997번-즐거운-회의 [오늘도 개발로그:티스토리]