// Last updated: 1/28/2026, 2:48:27 PM
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string common = "";
        int index = 0;
        while (true){
            if (strs.empty()) return common;
            if (strs[0].size() == index) return common;
            char tmp = strs[0][index];
            for (int i = 0; i < strs.size(); i++) {
                if (strs[i][index] != tmp) return common;
            }
            common += tmp;
            index++;
        }
    }
};