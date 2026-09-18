class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0, j=nums.size()-1;
        int lsq=0, rsq=0;
        int k=nums.size()-1;
        vector<int> ans(nums.size());
        while(i<=j){
            lsq=nums[i]*nums[i];
            rsq=nums[j]*nums[j];
            if(lsq>rsq){
                ans[k]=lsq;
                i++;
                k--;
            }
            else{
                ans[k]=rsq;
                j--;
                k--;
            }
        } 
        return ans;   
    }
};