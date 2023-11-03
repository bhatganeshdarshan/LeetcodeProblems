class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> stack ;
        int input=1;
        for(auto x:target){
            while(input<x){
                stack.push_back("Push");
                stack.push_back("Pop");
                input++;
            }
            stack.push_back("Push");
            input++;
        }
        return stack;
    }
};