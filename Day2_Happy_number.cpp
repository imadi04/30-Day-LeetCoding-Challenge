class Solution {
public:
    bool isHappy(int n) {
        while(n!=1){
            if(n==4||n==16||n==37 ||n==58||n==89 ||n==145||n==42||n==20){
               return false;
            }
            else{
               n=sumdigit(n);
            } 
        }
        return true;
    }
    int sumdigit(int n){
        int sumdig=0,dig;
        while(n>0){
            dig=n%10;
            sumdig+=dig*dig;
            n/=10;
        }
        return sumdig;
    }
};