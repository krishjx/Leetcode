class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
       
        int i=0,n=nums.size();
        vector <int> ans(n,0);
        for(int k=0;k<n;k++){
            ans[i++]=nums[nums[k]];
        }
        return ans;
    }
};