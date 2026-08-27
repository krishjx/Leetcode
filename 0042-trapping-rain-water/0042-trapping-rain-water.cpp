class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int arr[n],brr[n];
        //for previous greatest number
        for(int i=0;i<n;i++){
            if(i==0){arr[i]=-1;}
            else if(i==1){arr[i]=height[i-1];}
            else{arr[i]=max(arr[i-1],height[i-1]);}
            }
        //for next greatest number
        for(int i=n-1;0<=i;i--){
            if(i==n-1){brr[i]=-1;}
            else if(i==n-1-1){brr[i]=height[n-1];}
            else{brr[i]=max(brr[i+1],height[i+1]);}
            }
        for(int i=1;i<n-1;i++){
            arr[i]=min(arr[i],brr[i]);
        }
        int sum=0;
        for(int i=1;i<n-1;i++){
            if(height[i]<arr[i]){sum=arr[i]-height[i]+sum;}
        }
        return sum;
    }
};