class Solution {
public:
    int mirrorDistance(int n) {
        int num=n;
        int rev=0;
        while(num){
            int lastdigit=num%10;
            rev= rev*10+lastdigit;
            num/=10;
        }
        return abs(n-rev);
    }
};