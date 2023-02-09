class Solution {
public:
    int mySqrt(int x) {
        int ans,s=1,e=x;

        while(s<=e){
            long long int mid = s + (e-s)/2;
            long long int sq = mid * mid;
            if(sq==x) return mid;
            if(sq>x){
                e = mid-1;
            }else{
                s = mid+1;
                ans = mid;
            }
        };
        return ans;
    }
};
