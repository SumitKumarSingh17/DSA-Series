class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int i=0, j=nums.size()-1;
        int cnt=0;
        while(i<j){
            if(nums[i]+nums[j]<target){
                cnt+=j-i;  //This is done bcz array is sorted so if i and j element sum is less than the target so all number between them has less sum value so it count in one go.
                i++;
            }
            else j--;
        }
        return cnt;
    }
};