class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
         int n=nums.size();
        vector <int> v(n);
        vector <int> b(n);
       
        v[0]=0;
    int sum=0;
        for(int i=1;i<n;i++){
            sum=nums[i-1]+sum;
            v[i]=sum;
        }
        sum=0;
        b[n-1]=0;
        for(int i=n-2;i>=0;i--){
            sum=nums[i+1]+sum;
            b[i]=sum;
        }
        for(int i=0;i<n;i++){
           if(v[i]-b[i]<0){
             v[i]=-1*(v[i]-b[i]);
           }
           else{v[i]=v[i]-b[i];}
        }
        return v;
    }
};