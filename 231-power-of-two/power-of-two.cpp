class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0){
            return false;
        }
       int x=float(log2(n));
       return x==log2(n);
    }
};