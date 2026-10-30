class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.size();
        int st=0, maxcnt=0, cnt=0;
        for(int end=0; end<n; end++){
            if(s[end]=='a' || s[end]=='e' || s[end]=='i' || s[end]=='o' || s[end]=='u') cnt++;
            if(end>=k-1){
                maxcnt=max(maxcnt,cnt);
                if(s[st]=='a' || s[st]=='e' || s[st]=='i' || s[st]=='o' || s[st]=='u') cnt--;
                st++;
            }
        }
        return maxcnt;
    }
};