// Last updated: 1/28/2026, 2:48:24 PM
class Solution {
public:
    int totalNQueens(int n) {
        vector<int> X(n + 1);
        vector<int> cot(100, 1);
        vector<int> dx(100, 1);
        vector<int> dn(100, 1);
        int cnt = 0;
        function<void(int)> Try = [&](int i) {
            for (int j = 1; j <= n; j++) {
                if (cot[j] == 1 && dx[i - j + n] == 1 && dn[i + j - 1] == 1) {
                    X[i] = j;
                    cot[j] = dx[i - j + n] = dn[i + j - 1] = 0;
                    if (i == n) cnt++;
                    else Try(i + 1);
                    cot[j] = dx[i - j + n] = dn[i + j - 1] = 1;
                }
            }
        };
        if (n == 1) return 1;
        else {
            Try(1);
            return cnt;
        }
    }
};