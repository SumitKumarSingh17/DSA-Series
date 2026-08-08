class Solution {
public:
    int search(vector<int>& nums, int target) {
        int f=0, l=nums.size();
        int mid=(f+l)/2;
        for(int i=0; i<nums.size(); i++){
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target){
                f=mid+1;
                mid=(f+l)/2;
            }
            else{
                l=mid-1;
                mid=(f+l)/2;
            }
        }
        return -1;
    }
};