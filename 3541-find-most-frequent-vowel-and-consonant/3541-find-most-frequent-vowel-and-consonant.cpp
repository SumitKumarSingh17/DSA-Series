class Solution {
public:
    int maxFreqSum(string s) {
        int freq[26]={0};
        int vowel=0, cons=0;
        for(char ch:s){
            freq[ch-'a']++;
        }
        for(int i=0; i<26; i++){
            char ch='a'+i;
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                vowel=max(vowel,freq[i]);
            }
            else{
                cons=max(cons,freq[i]);
            }
        }
        return vowel+cons;
    }
};