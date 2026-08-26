class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        while(i<j){
            if(nums[i]>nums[j]){ 
                nums[i]=nums[i]+nums[j];
                nums[j]=nums[i]-nums[j];
                nums[i]=nums[i]-nums[j];
                }
            if(nums[i]==0){i++;}
             if(nums[j]>0){j--;}
        }
         i=0,j=nums.size()-1;
         while(i<j){
            // if(nums[i]==0 || nums[i]==1){i++;}

             if(nums[i]>nums[j]){ 
                nums[i]=nums[i]+nums[j];
                nums[j]=nums[i]-nums[j];
                nums[i]=nums[i]-nums[j];
                }
            if(nums[i]==0 || nums[i]==1){i++;}
             if(nums[j]==2){j--;}
        }
        // while(i<j){
        //     if(nums[i]>nums[j]){
        //         nums[i]=nums[i]+nums[j];
        //         nums[j]=nums[i]-nums[j];
        //         nums[i]=nums[i]-nums[j];
        //     }
        //     if((nums[i]==nums[j]) &&(i+1==j || i==j)){
        //         break;
        //     }
        //     if(nums[i]==nums[j]){
        //         nums[i]=nums[i]+nums[i+1];
        //         nums[i+1]=nums[i]-nums[i+1];
        //         nums[i]=nums[i]-nums[i+1];
                
        //     }
             
        //     if(nums[i]==0){i++;}
        //     if(nums[j]==2){j--;}
            
        // }
    }
};