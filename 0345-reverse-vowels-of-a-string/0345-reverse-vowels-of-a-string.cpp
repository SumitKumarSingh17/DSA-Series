class Solution {
public:
    string reverseVowels(string s) {
        string v="";
        for(int i=0; i<s.size(); i++){
            if(tolower(s[i])=='a' || tolower(s[i])=='e' || tolower(s[i])=='i' || tolower(s[i])=='o' || tolower(s[i])=='u'){
                v+=s[i];
            }
        }
        reverse(v.begin(), v.end());
        int j=0;
        for(int i=0; i<s.size(); i++){
            if(tolower(s[i])=='a' || tolower(s[i])=='e' || tolower(s[i])=='i' || tolower(s[i])=='o' || tolower(s[i])=='u'){
                s[i]=v[j];
                j++;
            }
        }
        return s;
    }
};