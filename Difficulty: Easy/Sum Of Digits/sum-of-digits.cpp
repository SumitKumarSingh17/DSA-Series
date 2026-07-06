class Solution {
  public:
    int sumOfDigits(int n) {
        // code here
        int summ = 0;
        while (n > 0){
            int digit = n % 10;
            n /= 10;
            summ += digit;
            
        }
        return summ;
    }
};