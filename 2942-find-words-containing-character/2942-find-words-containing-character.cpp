class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        for(int i=0; i<words.size(); i++){
            string curr=words[i];
            for(int j=0; j<curr.size(); j++){
                if(curr[j]==x){
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};