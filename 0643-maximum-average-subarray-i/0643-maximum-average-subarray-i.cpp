class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int st=0;
        double sum=0, maxsum=-1e9;
        for(int end=0; end<n; end++){
            sum+=nums[end];
            if(end>=k-1){
                maxsum=max(maxsum, sum);
                sum-=nums[st];
                st++;
            }
        }
        return maxsum/k;
    }
};