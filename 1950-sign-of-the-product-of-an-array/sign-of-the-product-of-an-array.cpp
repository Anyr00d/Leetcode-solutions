class Solution {
public:
    int arraySign(vector<int>& nums) {
        int count=1;
        for(int i:nums){
            if(i==0){
                return 0;
            }else{
                count*=i/abs(i);
            }
        }
        return count;
    }
};