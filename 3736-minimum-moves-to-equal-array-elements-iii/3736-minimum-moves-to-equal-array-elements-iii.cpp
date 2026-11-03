class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int sum=0, mxsum=0, maxi=INT_MIN;
        for(int i=0; i<n; i++){
            maxi=max(maxi, nums[i]);
            sum+=nums[i];
        }
        mxsum=maxi*n;
        return mxsum-sum;
    }
};