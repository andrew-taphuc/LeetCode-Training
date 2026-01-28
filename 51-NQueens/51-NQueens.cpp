// Last updated: 1/28/2026, 2:48:21 PM
class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> result;
        vector<int> X(n + 1);
        vector<int> cot(100, 1);
        vector<int> dx(100, 1);
        vector<int> dn(100, 1);
        
        function<void(int)> Try = [&](int i) {
            for (int j = 1; j <= n; j++) {
                if (cot[j] == 1 && dx[i - j + n] == 1 && dn[i + j - 1] == 1) {
                    X[i] = j;
                    
                    cot[j] = 0;
                    dx[i - j + n] = 0;
                    dn[i + j - 1] = 0;
                    
                    if (i == n) {
                        vector<string> solution;
                        for (int k = 1; k <= n; k++) {
                            string row(n, '.');
                            row[X[k] - 1] = 'Q';
                            solution.push_back(row);
                        }
                        result.push_back(solution);
                    }
                    else Try(i + 1);
                    
                    cot[j] = 1;
                    dx[i - j + n] = 1;
                    dn[i + j - 1] = 1;
                }
            }
        };
        
        if (n == 1) {
            result.push_back({"Q"});
        } else {
            Try(1);
        }
        
        return result;
    }
};