class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int mn = nums[0];
        int mx = nums[nums.size() - 1];
        for (int i = mn; i <= mx; i++) {
            bool found = false;
            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] == i) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};