class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int> ans(n);
        int i=0, j=n-1;
        int lft=0, rgt=n-1;
        while(i<n){
            if(nums[i]<pivot){
                ans[lft]=nums[i];
                lft++;
            }
            if(nums[j]>pivot){
                ans[rgt]=nums[j];
                rgt--;
            }
            i++;
            j--;
        }
        while(lft<=rgt){
            ans[lft]=pivot;
            lft++;
        }
        return ans;
    }
};