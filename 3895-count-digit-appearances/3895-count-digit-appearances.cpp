class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int cnt=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            while(nums[i]){
                int ld=nums[i]%10;
                if(ld==digit) cnt++;
                nums[i]/=10;
            }
        }
        return cnt;
    }
};