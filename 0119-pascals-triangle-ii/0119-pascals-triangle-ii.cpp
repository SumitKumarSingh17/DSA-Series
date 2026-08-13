class Solution {
public:
    long long fact(int n){
            long long ans=1;
            for(long long i=1;i<=n;i++){
                ans*=i;
            }
            return ans;
        }
    vector<int> getRow(int rind) {
        vector<int> ans(rind+1,0);
        ans[0]=1;
        for(int i=1;i<=rind;i++){
            for(int j=i;j>=1;j--){
                ans[j]+=ans[j-1];
            }
        }
        return ans;
    }
};