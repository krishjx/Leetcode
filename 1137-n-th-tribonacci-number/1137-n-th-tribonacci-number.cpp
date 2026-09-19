class Solution {
public:
    int tribonacci(int n) {
        if (n == 0) {
            return 0;
        } else if(n == 1 || n==2){
            return 1;
        }else{
        int t1=0,t2=1,t3=1,current=0;
         for(int k=3;k<=n;k++){
             current=t1+t2+t3;
            t1=t2;
            t2=t3;
            t3=current;
        } return current;}
       
    }
};