class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int freq[26]={0};
        for(int i=0; i<magazine.size(); i++) freq[magazine[i]-'a']++;
        for(int j=0; j<ransomNote.size(); j++){
            freq[ransomNote[j]-'a']--;
            if(freq[ransomNote[j]-'a']<0) return false;
        }
        return true;
    }
};