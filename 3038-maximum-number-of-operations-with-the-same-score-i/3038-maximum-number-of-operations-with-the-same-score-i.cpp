class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int n=nums.size();
        int a=nums[0]+nums[1];
        int cnt=1;
        for(int i=2; i<n; i+=2){
            if(nums[i]+nums[i+1]==a) cnt++;
            else break;
        }
        return cnt;
    }
};