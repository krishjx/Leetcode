class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int r=grid.size(),c=grid[0].size(),noo=0,noz=0;
        for(int i=0;i<r;i++){
            if(grid[i][0]==0){
                for(int j=0;j<c;j++){
                    if(grid[i][j]==1){
                        grid[i][j]=0;
                    }
                    else{
                        grid[i][j]=1;
                    }
                }
            }
        }
        //cout noz,noo
        for(int i=1;i<c;i++){
            noo=0;noz=0;
       for(int j=0;j<r;j++){ 
        if (grid[j][i]==1){noo++;}
        else{noz++;}
       }
       //fliping rows
       if(noz>noo){
       for(int j=0;j<r;j++){
         if(grid[j][i]==1){
                        grid[j][i]=0;
                    }
                    else{
                        grid[j][i]=1;
                    }
        }
       }
       }
       int sum=0;
        for(int i=0;i<r;i++){
            for(int j=c-1, k=1;j>=0;j--,k=k*2){
                sum=sum+(grid[i][j]*k);
            }
        }
        return sum;
    }
};