class Solution {
public:
    int maxDistinct(string s) {
        unordered_map<char, int> mp;
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
        }
        int cnt=0;
        for(int i=0; i<mp.size(); i++){
            cnt++;
        }
        return cnt;
    }
};