class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        for(int i=0; i<n; i++){
            if(nums[i]%2==0) cnt++;
        }
        for(int i=0; i<n; i++){
            if(i<cnt) nums[i]=0;
            else nums[i]=1;
        }
        return nums;
    }
};