class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int lr=INT_MIN;
        int ind;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>lr){ 
                lr=nums[i];
                ind=i;
            }
        }
        for(int i=0; i<nums.size(); i++){
            if(lr<(2*nums[i]) && i!=ind){
                return -1;
            }
        }
        return ind;
    }
};