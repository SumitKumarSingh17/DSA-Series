class Solution {
public:
    bool isvowel(char ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            return true;
        }
        return false;
    }
    int maxFreqSum(string s) {
        int n=s.size();
        unordered_map<char,int> mp;
        for(int i=0; i<n; i++){
            mp[s[i]]++;
        }
        int vowel=0, cons=0;
        for(char c='a'; c<='z'; c++){
            if(isvowel(c)) vowel=max(vowel, mp[c]);
            else cons=max(cons, mp[c]);
        }
        return vowel+cons;
    }
};