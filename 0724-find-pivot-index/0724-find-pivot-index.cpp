class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int right=0,left=0;
            for(int j=0;j<i;j++){
                right=nums[j]+right;
            }
            for(int k=nums.size()-1;i<k;k--){
                left+=nums[k];
            }
            if(left==right){return i;}
        }
        return -1;
    }
};