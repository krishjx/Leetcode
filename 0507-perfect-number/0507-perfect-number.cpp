class Solution {
public:
    bool checkPerfectNumber(int num) {
      int i=1,sum=0;
      while(i<=num/2){
        if(num%i==0){sum+=i;}
        i++;
      }
    if(sum==num){return 1;}
    else{return 0;}
    }
};