class Solution {
public:
    int findGCD(vector<int>& nums) {
        int small=INT_MAX;
        int large=INT_MIN;
        for(int i=0; i<nums.size(); i++){
            small=min(small,nums[i]);
            large=max(large, nums[i]);
        }
        while(large!=0){
            int temp=large;
            large=small%large;
            small=temp;
        }
        return small;
    }
};