class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        int j=0;
        vector<int> temp(n);
        k=k%n;
        for(int i=n-k; i<n; i++){
            temp[j]=nums[i];
            j++;
        }
        for(int i=0; i<n-k; i++){
            temp[j]=nums[i];
            j++;
        }
        for(int i=0; i<n; i++){
            nums[i]=temp[i];
        }
    }
};