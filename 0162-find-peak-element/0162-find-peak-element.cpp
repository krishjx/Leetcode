class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        vector <int> v;
        v=nums;
        sort(v.begin(),v.end());
        int s=v[n-1];
        for(int i=0;i<n;i++){
            if(nums[i]==s){return i;}
        }
        return 0;
    }
};