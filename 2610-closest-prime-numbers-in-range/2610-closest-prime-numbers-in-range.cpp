class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int> sieve(right + 1, 1);
        vector<int> ans;
        vector<int> primes;
        sieve[0] = sieve[1] = 0;

        for (long long int i = 2; i * i <= right; i++) {
            if (sieve[i]) {
                for (long long j = i * i; j <= right; j += i) {
                    sieve[j] = 0;
                }
            }
        }

        for (int i = left; i <= right; i++) {
            if (sieve[i]) {
                primes.push_back(i);
            }
        }

        int min_diff = INT_MAX;

        for (int i = 1; i < primes.size(); i++) {
            int diff = primes[i] - primes[i - 1];
            if (diff < min_diff) {
                min_diff = diff;
                ans.clear();
                ans.push_back(primes[i - 1]);
                ans.push_back(primes[i]);
            }
        }
        if(ans.empty()){
            return {-1,-1};
        }
        return ans;
    }
};
