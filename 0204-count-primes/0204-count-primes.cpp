class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;

        vector<int> pr(n, 1);

        pr[0] = 0;
        pr[1] = 0;

        for (int i = 2; i * i < n; i++) {
            if (pr[i] == 1) {
                for (int j = i * i; j < n; j += i) {
                    pr[j] = 0;
                }
            }
        }

        int count = 0;
        for (int i = 2; i < n; i++) {
            if (pr[i]) count++;
        }

        return count;
    }
};