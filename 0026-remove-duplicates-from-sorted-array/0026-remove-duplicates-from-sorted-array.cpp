class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector <int> v;
    int neg=0,count=0,n=nums.size();
    if(n==0){return 0;}
     v.push_back(nums[0]);
       for(int i=1;i<n;i++) {
            v.push_back(nums[i]);
            if(nums[i]==nums[i-1] ){
                v.pop_back();
                neg++;
            }
        }
        nums=v;
        return n-neg;
    }
};