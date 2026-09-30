class Solution {
public:
    int squaresum(int n){
        int s=0;
        while(n>0){
            int last=n%10;
            s+=(last*last);
            n/=10;
        }
        return s;
    }
    bool isHappy(int n) {
        while(n!=1 && n!=4){
            n=squaresum(n);
        }
        return n==1;
    }
};
