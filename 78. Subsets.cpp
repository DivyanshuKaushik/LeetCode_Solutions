class Solution {
public:
    void solve(vector<int> &nums,int i,vector<int> out, vector<vector<int>> &ans){
        if(i>=nums.size()){
            ans.push_back(out);
            return;
        }

        // exclude 
        solve(nums,i+1,out,ans);

        // include
        out.push_back(nums[i]);
        solve(nums,i+1,out,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>output;
        int index = 0;

        solve(nums,index,output,ans);
        return ans;
    }
};