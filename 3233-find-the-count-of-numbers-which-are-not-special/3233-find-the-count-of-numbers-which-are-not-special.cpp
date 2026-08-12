class Solution {
public:
    bool isPrime(int n){
        if(n<2) return false;
        for(int i=2; i*i<=n; i++) {
            if(n%i==0) return false;
        }
        return true;
    }
    int nonSpecialCount(int l, int r){
        int sp=0;
        int st=ceil(sqrt(l));
        int end=floor(sqrt(r));
        for (int i=st; i<=end; i++){
            if (isPrime(i)) sp++;
        }
        return (r-l+1)-sp;
    }
};