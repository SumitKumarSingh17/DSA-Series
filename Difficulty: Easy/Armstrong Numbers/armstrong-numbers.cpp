class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int sum = 0;
        int temp = n;
        while (n){
            int ld = n % 10;
            sum = (ld*ld*ld) + sum;
            n = n/ 10;
            
        }
        if( temp == sum) return true;
        return false;
    }
};