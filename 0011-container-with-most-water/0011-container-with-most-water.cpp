class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0, j=height.size()-1, minh=0, maxar=0, ar=0;
        while(i<j){
            minh=min(height[i], height[j]);
            int width=j-i;
            ar=width*minh;
            maxar=max(maxar, ar);
            if(height[i]<height[j]) i++;
            else j--;
        }
        return maxar;
    }
};