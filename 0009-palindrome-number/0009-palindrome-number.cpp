class Solution {
public:
    bool isPalindrome(int x) {
        int long long c=x,sum=0;
        while(x>0){
            sum=sum*10+(x%10);
            x=x/10;
        }
        if(sum==c){return 1;}
        else return 0;
    }
};