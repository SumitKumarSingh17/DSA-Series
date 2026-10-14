class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ans(num_people, 0);
        int i=0, c=1;
        while(candies){
            if(candies>c){
                ans[i]+=c;
                candies-=c;
            }
            else{
                ans[i]+=candies;
                candies=0;
            }
            c++;
            i++;
            if(i==num_people) i=0;
        }
        return ans;
    }
};