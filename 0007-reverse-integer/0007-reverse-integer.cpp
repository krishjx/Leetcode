class Solution { 
public:
    int reverse(int x) {
        int a=0;
        int long long sum=0,s=1;
        if(x<0){
            s=-1;
            x=s*x;
        }
        while(x>0){
            a=x%10;
            sum=sum*10+a;
            x=x/10;
            if(s*sum>INT_MAX || INT_MIN>s*sum){return 0;}
        }
        
        return s*sum;

    }
};