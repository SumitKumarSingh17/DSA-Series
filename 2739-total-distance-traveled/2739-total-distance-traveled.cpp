class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int confuel=0;
        while(mainTank>=5){
            mainTank-=5;
            confuel+=5;
            if(additionalTank>0){
                mainTank+=1;
                additionalTank--;
            }
        }
        confuel+=mainTank;
        return confuel*10;
    }
};