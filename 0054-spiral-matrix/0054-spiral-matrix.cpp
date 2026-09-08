class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        // vector<int> v;
        int r = matrix.size(), c = matrix[0].size();
            vector <int> v;
        int n = 0, minr = 0, minc = 0, maxr = r - 1, maxc = c - 1;
        n = (r + 1) / 2;
        while (minr <= maxr && minc <= maxc) {
            for (int r1 = minc; r1 <= maxc; r1++) {
                v.push_back(matrix[minr][r1]);
            }
            minr++;
            for (int c1 = minr; c1 <= maxr; c1++) {
                v.push_back(matrix[c1][maxc]);
            }
            maxc--;
            if(minr <= maxr && minc <= maxc){
            for (int r2 = maxc; r2 >= minc; r2--) {
                v.push_back(matrix[maxr][r2]);
            }
            maxr--;}
            if(minr <= maxr && minc <= maxc){
            for (int c2 = maxr; c2 >= minr; c2--) {
                v.push_back(matrix[c2][minc]);
            }
            minc++;}
        }
        return v;
    }
};