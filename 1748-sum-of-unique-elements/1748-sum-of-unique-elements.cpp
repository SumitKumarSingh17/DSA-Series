class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0;
        vector<int> v;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            if(i>0 && nums[i]==nums[i-1]) continue; 
            if(i<nums.size()-1 && nums[i]==nums[i+1]) continue;
            else v.push_back(nums[i]);
        }
        for(int i=0; i<v.size(); i++){
            sum+=v[i];
        }
        return sum;
    }
};