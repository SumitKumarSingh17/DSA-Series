class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int> ans;
       int n=mat.size();
       int m=mat[0].size();
       int l=0,r=m-1,t=0,d=n-1;
       int dr=0;
       //0(l to r) 1(t to d) 2(r to l) 3(d to t)
       while(t<=d&&l<=r){


           //c1 l to r
           if(dr==0){
               for(int i=l;i<=r;i++)ans.push_back(mat[t][i]);
               t++;
           }
           //cw t to b
           if(dr==1){
               for(int i=t;i<=d;i++)ans.push_back(mat[i][r]);
               r--;
           }
           //c3 r to l
           if(dr==2){
               for(int i=r;i>=l;i--)ans.push_back(mat[d][i]);
               d--;
           }
           if(dr==3){
               for(int i=d;i>=t;i--)ans.push_back(mat[i][l]);
               l++;
           }
           dr++;
           dr%=4;
       }
       return ans;

    }
};