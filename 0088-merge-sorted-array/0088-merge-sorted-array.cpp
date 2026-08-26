class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k=m+n,i=0,j=0,a=0;
        vector <int> v(k);
        for(a=0;a<k && i<m && j<n;a++){
            if(nums1[i]<nums2[j]){
                v[a]=nums1[i];
                i++;
            }
            else{
            v[a]=nums2[j];
                j++;
                }
            }
            for(a;a<k;a++){
                if(i==m){v[a]=nums2[j];j++;}
                else{v[a]=nums1[i];i++;}
            }
for(int i=0;i<k;i++){
    nums1[i]=v[i];
        }
    }
};