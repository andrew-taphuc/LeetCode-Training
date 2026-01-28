// Last updated: 1/28/2026, 2:48:22 PM
class Solution {
public:
    bool isValid(string s) {
    if (s.length() % 2 != 0) return false;
    
    stack<char> check;
    
    for (int i = 0; i < s.length(); i++){
        if (s[i] == '{' || s[i] == '(' || s[i] == '['){
            check.push(s[i]);
        }
        if (s[i] == '}' || s[i] == ')' || s[i] == ']'){
            char tmp;
            if (!check.empty()) {
                tmp = check.top();
                
            } else return false;
            if ((s[i] == ')' && tmp != '(') ||
    (s[i] == ']' && tmp != '[') ||
    (s[i] == '}' && tmp != '{')) {
    return false;
}

            check.pop();
        }
    }
    
    if (check.empty()) return true;
    return false;
}
};