class Solution {
public:
    bool isPalindrome(string s) {
        string st;
        for(int i=0;i<s.length();i++){
            if(s[i]>='A' && s[i]<='Z'){
                st.push_back('a' + s[i] - 'A');
            }else if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9') ){
                st.push_back(s[i]);
            }
        }
        int i=0,j=st.length()-1;
        while(i<j){
            if(st[i]!=st[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
