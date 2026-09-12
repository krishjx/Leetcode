class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> v(n, vector<int>(n));
        int minr = 0, maxr = n - 1, minc = 0, maxc = n - 1, s = 1;
        for (int i = 0; i < ((n + 1) / 2); i++) {
            for (int j = minc; j <= maxc;
                 j++) { // bar bar tum yaha per equal to wali conditon bhul ja
                        // rahe hoo
                v[minr][j] = s++;
            }
            minr++;
            for (int j = minr; j <= maxr; j++) {
                v[j][maxc] = s++;
            }
            maxc--;
            for (int j = maxc; j >= minc

                 ;
                 j--) {
                v[maxr][j] = s++;
            }
            maxr--;
            ;
            for (int j = maxr; j >= minr

                 ;
                 j--) {
                v[j][minc] = s++;
            }
            minc++;
        }
        return v;
    }
};