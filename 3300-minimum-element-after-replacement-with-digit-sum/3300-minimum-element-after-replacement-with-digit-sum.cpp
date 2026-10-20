class Solution {
public:
    int minElement(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MAX;
        for(int i=0; i<n; i++){
            int sum=0;
            int num=nums[i];
            while(num){
                int digit=num%10;
                sum+=digit;
                num/=10;
            }
            ans=min(ans,sum);
        }
        return ans;
    }
};