class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int f=0, l=nums.size()-1;
        int mid=f+(l-f)/2;
        while(f<=l){
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                f=mid+1;
                mid=(f+l)/2;
            }
            else{
                l=mid-1;
                mid=(f+l)/2;
            }
        }
        return f;

    }
};