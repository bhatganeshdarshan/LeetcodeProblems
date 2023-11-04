class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(int i =0 ; s[i]!='\0' ; i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                stk.push(s[i]);
            else{
                if(stk.empty()) return false;
                char top = stk.top();
                if((top=='(' && s[i]==')')||(top=='{' && s[i]=='}')||(top=='[' && s[i]==']')){
                    stk.pop();
                } else{
                    return false ;
                }
            }
            }
            return stk.empty();
        }
};