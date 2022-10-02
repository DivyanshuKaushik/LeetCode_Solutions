class Solution {
public:
    bool isPalindrome(int x) {
        int reversed=0,rem,n=x;
       
        if(n<0 || (n%10==0 && n!=0)){
            return false;
        }
        while(x>reversed){
            rem = x%10;
            reversed = reversed*10 + rem;
            x/=10;
        }
        return x==reversed || x==reversed/10;
        
             
    }
};