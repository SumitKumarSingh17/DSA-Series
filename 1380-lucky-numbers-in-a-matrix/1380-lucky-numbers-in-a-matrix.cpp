class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0; i<m; i++){
            int mini=INT_MAX;
            int col=0;
            for(int j=0; j<n; j++){
                if(matrix[i][j]<mini){
                    mini=min(mini, matrix[i][j]);
                    col=j;
                }
            }
            int maxi=INT_MIN;
            for(int j=0; j<m; j++){
                maxi=max(maxi, matrix[j][col]);
            }
            if(mini==maxi) return {mini};
        }
        return {};
    }
};