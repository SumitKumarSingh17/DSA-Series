class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        int cnte=0;
        for(int i=0; i<n; i++){
            cnt=0;
            int num=nums[i];
            while(num>0){
                num/=10;
                cnt++;
            }
            if(cnt%2==0) cnte++;
        }
        return cnte;
            
    }
};