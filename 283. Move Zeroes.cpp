class Solution {
public:
    void moveZeroes(vector<int>& n) {
        int nz = 0 ; // non zero
        for(int i =0;i<n.size();i++){
            if(n[i]!=0){
                swap(n[i],n[nz]);
                nz++;
            }
        }
    }
};
