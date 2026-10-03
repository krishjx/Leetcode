class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // vector <int> prefix(n);
        int n=prices.size();
        vector <int> prefix(n);
        vector <int> sufix(n);
     prefix[0]=prices[0];
     sufix[n-1]=prices[n-1];
    for(int i=1;i<n;i++){
       prefix[i]=min(prefix[i-1],prices[i]);
    }
    for(int i=n-2;i>=0;i--){
       sufix[i]=(max(prefix[i+1],prices[i]));
    }
    int max=0;
    for(int i=0;i<n-1;i++){
        int max1=sufix[i+1]-prefix[i];
        if(max<max1){max=max1;}
    }
    return max;
    }
};