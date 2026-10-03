class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();
        vector<int> v(n, 0);
        int pro = 1, noz = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                noz++;
            }
        }
        if (noz > 1) {
            return v;
        }

        for (int i = 0; i < n; i++) {
            pro = pro * nums[i];
        }
        for (int i = 0; i < n; i++) {
            int a = 1;
            if (nums[i] == 0) {
                int pro1 = 1, a1 = 0;
                for (int k = 0; k < n; k++) {
                    if (nums[k] == 0) {
                        a1 = 1;
                    } else {
                        a1 = nums[k];
                    }
                    pro1 = pro1 * a1;
                }
                v[i] = pro1;
                return v;
            } else {
                a = nums[i];
            }
            int k = pro / a;
            v[i] = k;
        }
        return v;
    }
};