class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum=0;
        int h=0;
        for(int i=0; i<gain.size(); i++){
            sum+=gain[i];
            h=max(h,sum);
        }
        return h;
    }
};