class Solution {
public:
    int countPrimes(int n) {
       if (n <= 2) {
            return 0;
        }
        vector<int> seive(n, 1);
        int count = 0;
        seive[0] = seive[1] = 0;
        for (long long i = 2; i<n; i++) {
            if (seive[i]) {
                for (long long j = i * i; j < n; j=j+i) {
                    seive[j] = 0;
                }
            }
        }
        for (int i = 2; i < n; i++) {
            if (seive[i]) {
                count++;
            }
        }
        return count;
    }
    
};