class Solution {
public:
    bool lower(char c){
        if(tolower(c)=='a' || tolower(c)=='e' || tolower(c)=='i' || tolower(c)=='o' || tolower(c)=='u') return true;
        return false;
    }
    string reverseVowels(string s) {
        int i=0, j=s.size()-1;
        while(i<j){
            while(i<j && !lower(s[i])) i++;
            while(i<j && !lower(s[j])) j--;
            swap(s[i],s[j]);
            i++;
            j--;
        }
        return s;
    }
};