class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        unordered_set<int> unique_factors;
        
        for (int num : nums) {
            for (int i = 2; i * i <= num; i++) {
                while (num % i == 0) {
                    unique_factors.insert(i);
                    num /= i;
                }
            }
            if (num > 1) {
                unique_factors.insert(num);
            }
        }
        
        return unique_factors.size();
    }
};
