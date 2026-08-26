class Solution {
public:


        void swap(int &a,int &b) {
            int temp=a;
            a=b;
            b=temp;
            
        }
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k=m+n-1,i=m-1,j=n-1;
        for(k;0<k && 0<=i && 0<=j;k--){
            if(nums1[i]<nums2[j]){
                swap(nums1[k],nums2[j]);
                j--;
            }
            else{
            swap(nums1[k],nums1[i]);
                i--;
                }
            }
            for(k;0<=k;k--){
                if(i<0){swap(nums1[k],nums2[j]);j--;}
                else{
                    swap(nums1[k],nums1[i]);i--;}
            }
    }
};