class Solution {
  public:
    bool isPower(int x, int y) {
        // code here
        if ( x == 1 ){
                if(y==1)return true;
                return false;
        }
        if(y==1)return true;
        while( y % x == 0){
            y /= x;
        }
        return y == 1;
    }
};