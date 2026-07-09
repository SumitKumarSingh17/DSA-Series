class Solution {
  public:
    int convert(int x) {
        if (x == 0)
            return 5;
        int ans = 0;
        int place = 1;
        while (x > 0) {
            int digit = x % 10;
            if (digit == 0) digit = 5;
            ans = digit * place + ans;
            place *= 10;
            x /= 10;
        }

        return ans;
    }

    int convertFive(int n) {
        return convert(n);
    }
};