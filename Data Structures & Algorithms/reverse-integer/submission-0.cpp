class Solution {
public:
    int reverse(int x) {
        long rev=0;
        while(x!=0){
            int last=x%10;
            rev=rev*10+last;
            x/=10;
        }
        if(rev>INT_MAX || rev<INT_MIN){
            return 0;
        }
        return (int)rev;
    }
};
