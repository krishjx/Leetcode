class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int flag=1;
        int n=nums.size(),max=0,min=0,s=0;
        for(int i=0;i<n-1;i++){
           
            if(nums[i]<=nums[i+1]){max++;}

            if(nums[i]>=nums[i+1]){min++; }
        }
        if(max==n-1 || min==n-1){return 1;}
        return 0;
    }
};