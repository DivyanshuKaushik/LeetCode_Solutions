class Solution {
public:
    int occurence(vector<int>& n, int k,int occ){
        int s = 0 , e = n.size()-1,ans = -1;
        while(s<=e){
            int mid = s + (e-s)/2;
            // cout<<mid<<endl;
            if(n[mid]==k){
                ans = mid;
                if(occ==1){
                    s = mid+1;
                }else{
                    e = mid -1;
                }
                continue;
            }
            if(n[mid]>k){
                e = mid-1;
            }else{
                s = mid +1;
            }
        }
        return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = occurence(nums,target,0);
        // cout<<"b"<<endl;
        int last = occurence(nums,target,1);
        vector<int> ans;
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};
