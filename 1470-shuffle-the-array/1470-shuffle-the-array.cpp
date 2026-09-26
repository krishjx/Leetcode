class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> v;
        int j=0,m=n;
        for(int i=0;i<n;i++){           //by use i<n loop run half time
            v.push_back(nums[j++]);   //it push the number x value
            v.push_back(nums[m++]);   // it push the number of y value
        }
        return v;
    }
};