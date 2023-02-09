class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        int cnt=0;
        while(cnt<n){
            vector<int> temp;
            if(cnt==0){
                temp.push_back(1);
                ans.push_back(temp);
                cnt++;
                continue;
            }
            temp.push_back(1);
            for(int i=0;i<cnt-1;i++){
                temp.push_back(ans[cnt-1][i] + ans[cnt-1][i+1]);
            }
            temp.push_back(1);
            ans.push_back(temp);
            cnt++;
        }

        return ans;
    }
};
