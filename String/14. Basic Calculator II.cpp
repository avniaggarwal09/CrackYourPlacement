class Solution {
public:
    int calculate(string s) {
        std::stack<int> stk;
        int currNum = 0;
        char sign = '+';
        
        for (int i = 0; i < s.size(); ++i) {
            if (isdigit(s[i])) {
                currNum = currNum * 10 + (s[i] - '0');
            }
            if (!isdigit(s[i]) && s[i] != ' ' || i == s.size() - 1) {
                if (sign == '+') {
                    stk.push(currNum);
                } 
                else if (sign == '-') {
                    stk.push(-currNum);
                } 
                else if (sign == '*') {
                    int top = stk.top();
                    stk.pop();
                    stk.push(top * currNum);
                } 
                else if (sign == '/') {
                    int top = stk.top();
                    stk.pop();
                    stk.push(top / currNum);
                }
                sign = s[i];
                currNum = 0;
            }
        }
        
        int result = 0;
        while (!stk.empty()) {
            result += stk.top();
            stk.pop();
        }
        
        return result;
    }
};