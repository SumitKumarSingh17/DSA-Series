class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int m=jewels.size();
        int n=stones.size();
        int cnt=0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(jewels[i]==stones[j]) cnt++;
            }
        }
        return cnt;
    }
};