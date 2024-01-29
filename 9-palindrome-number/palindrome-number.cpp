class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long int y=0;
        int z=x;
        while(x){
            y=y*10 + x%10;
            x/=10;
        }
        return z==y;
    }
};