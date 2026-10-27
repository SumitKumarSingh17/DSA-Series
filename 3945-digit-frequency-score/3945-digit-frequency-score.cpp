class Solution {
public:
    int digitFrequencyScore(int n) {
        vector<int> v(10,0);
        while(n){
            int ld=n%10;
            v[ld]++;
            n/=10;
        }
        int sum=0;
        for(int i=0; i<10; i++){
            sum+=i*v[i];
        }
        return sum;
    }
};