class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int noz=0,product=1,idx=-1;
for(int i=0;i<n;i++){
    if(nums[i]==0){
        noz++;
        idx=i;
        continue;
    }
    product*=nums[i];
    }
    vector<int> ans(n,0);
    if(noz>1) return ans;
    if(noz==1){
        ans[idx]=product;
        return ans;
    }
    for(int i=0;i<n;i++){
        ans[i]=product/nums[i];
    }
    return ans;
    }

};