class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int total=0;
        for(int i=0; i<n; i++){
            total+=nums[i];
        }
        int Rsum=0, Lsum=0;
        for(int i=0; i<n; i++){
            Rsum=total-Lsum-nums[i];
            if(Rsum==Lsum) return i;
            Lsum+=nums[i];
        }
        return -1;
    }
};