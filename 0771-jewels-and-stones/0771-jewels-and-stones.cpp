class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int freq[128]={0};
        int cnt=0;
        for(int i=0; i<jewels.size(); i++){
            freq[jewels[i]]++;
        }
        for(int i=0; i<stones.size(); i++){
            if(freq[stones[i]]==1) cnt++;
        }
        return cnt;
    }
};