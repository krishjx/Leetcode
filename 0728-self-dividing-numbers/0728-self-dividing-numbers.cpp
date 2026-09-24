class Solution {
public:
#include <string>
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v;
        while (left <= right) {
            bool flag = 0;
            int test = left;
            while (test > 0) {
                int d = test % 10;
            if(d==0){
                flag=0;
               break;
            }
                else if (left % d == 0) {
                    flag = 1;
                } else {
                    flag = 0;
                    break;
                }
                test = test / 10;
            }   
            if (flag != 0) {
                v.push_back(left);
            }
            left++;
        }
        return v;
    }
};