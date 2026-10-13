class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        vector<long long int> ans;
        for(int i=0;i<n;i++){
          ans.push_back(nums[i]*nums[i]);
        }
        long long sum1=0;
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size()/2;i++){
            sum1 = sum1+ ans[i];
        }
         long long sum2=0;
         for(int i=ans.size()/2;i<ans.size();i++){
            sum2 = sum2+ ans[i];
        }
        return  (long long)sum2-( long long)sum1;
    }
};