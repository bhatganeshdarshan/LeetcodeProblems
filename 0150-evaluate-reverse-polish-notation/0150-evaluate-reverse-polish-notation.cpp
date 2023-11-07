class Solution {
public:
    int evalRPN(std::vector<std::string>& tokens) {
        stack<int> stk;
        for (const string& token : tokens) {
            if (isNumber(token)) {
                stk.push(stoi(token));
            } else {
                int num2 = stk.top();
                stk.pop();
                int num1 = stk.top();
                stk.pop();
                int ans = evaluate(num1, num2, token[0]);
                stk.push(ans);
            }
        }
        return stk.top();
    }

private:
    bool isNumber(const string& str) {
        return !(str == "+" || str == "-" || str == "*" || str == "/");
    }

    int evaluate(int num1, int num2, char op) {
        switch (op) {
            case '+':
                return num1 + num2;
            case '-':
                return num1 - num2;
            case '*':
                return num1 * num2;
            case '/':
                return num1 / num2;
            default:
                return 0; 
        }
    }
};