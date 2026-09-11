class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size(),c=matrix[0].size(),flag=0;
        int i=0,j=c-1;
        while(j>=0 && i<r)
        {
            if(matrix[i][j]==target){
                flag=1;
               
               break;
                 
                
            }
            else if(matrix[i][j]>target){
                j--;
            }
            else{
                i++;
            }
        }
if(flag==1){return 1;}
else{
    return 0;
}
    }
};