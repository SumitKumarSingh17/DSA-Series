class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {

       int n=matrix.size();
       int m=matrix[0].size();


       //first row se diagonals
       for(int j=0;j<m;j++){
           int val=matrix[0][j];
           int i=0,col=j;


           while(i<n&&col<m){
               if(matrix[i][col]!=val){
                   return false;
               }
               i++;
               col++;
           }
       }


       //first column se diagonals
       for(int i=1;i<n;i++){
           int val=matrix[i][0];
           int row=i,j=0;


           while(row<n&&j<m){
               if(matrix[row][j]!=val){
                   return false;
               }
               row++;
               j++;
           }
       }


       return true;

    }
};