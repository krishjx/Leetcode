class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = 3;
        int r = mat.size(), c = mat[0].size(), flag = 8;
        while (n >= 0) {
            // transposing and reversing
            for (int i = 0; i < r; i++) {
                for (int j = i + 1; j < c; j++) {
                    int temp = mat[i][j];
                    mat[i][j] = mat[j][i];
                    mat[j][i] = temp;
                }
           
            // reversing a transposed row at same time i not exit the main for loop

                int b = c - 1, a = 0;
                while (a < b) {
                    int temp = mat[i][a];
                    mat[i][a] = mat[i][b];
                    mat[i][b] = temp;
                    a++;
                    b--;
                }
            }

            // checking both are same or not
            for (int i = 0; i < r; i++) {
                flag = 8;
                for (int j = 0; j < c; j++) {
                    if (mat[i][j] != target[i][j]){flag = 0;}
            }
                if (flag == 0){break;}
            }
            if (flag == 8){
                return 1;
            }
            n--;
        }
        return 0;
    }
};