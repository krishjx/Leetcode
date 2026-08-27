class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot=-1,n=nums.size();
        for(int i=n-1;0<i;i--){  
            if(nums[i-1]<nums[i]){pivot=i-1;break;}
        }
        if(pivot==-1){int i=0,j=n-1;
            while(i<j){
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;j--;}
            return;}
        else{
        int i=pivot+1,j=n-1;
        while(i<j){
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;j--;
        }int k=0;
        for(int z=pivot+1;z<n;z++){if(nums[pivot]<nums[z]){k=z;break;}}
        swap(nums[pivot],nums[k]);
    }
    }
};