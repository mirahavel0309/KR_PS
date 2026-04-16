#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<string> board(N);
    for (auto& row : board) cin >> row;
    
    int ans = INT_MAX;
    for (int i = 0; i <= N - 8; i++) {
        for (int j = 0; j <= M - 8; j++) {
            int cost1 = 0, cost2 = 0;
            for (int r = i; r < i + 8; r++) {
                for (int c = j; c < j + 8; c++) {
                    char expected = ((r + c) % 2 == 0) ? 'W' : 'B';
                    if (board[r][c] != expected) cost1++;
                    else cost2++;
                }
            }
            ans = min(ans, min(cost1, cost2));
        }
    }
    cout << ans;
}