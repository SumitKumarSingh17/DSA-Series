class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            int sum=0;
            if(nums[i]<10 && i==nums[i]) return i;
            else if(nums[i]>9){
                while(nums[i]){
                    int ld=nums[i]%10;
                    sum+=ld;
                    nums[i]/=10;
                }
                if(sum==i) return i;
            }
        }
        return -1;
    }
};