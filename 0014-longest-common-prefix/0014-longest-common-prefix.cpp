class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        int n=strs.size();
        if(strs.size()==0){return s;}
        sort(strs.begin(),strs.end());
        for(int i=0;i<min(strs[0].size(),strs[n-1].size());i++){
        if(strs[0][i]!=strs[n-1][i]){
         return s;
        }
        else{  s+=strs[0][i];}
        }
        return s;
    }
};