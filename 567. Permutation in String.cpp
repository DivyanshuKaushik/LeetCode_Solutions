class Solution {
public:
    bool compareFreq(int arr1[],int arr2[]){
        for(int i=0;i<26;i++){
            if(arr1[i]!=arr2[i]) return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};
        // get freq of s1 
        for(auto x:s1){
            freq[x-'a']++;
        }
        // window size for comparision
        int winsize = s1.size();
        int wfreq[26] = {0};
        int i = 0;
        
        // first window 
        while(i<winsize && i<s2.size()){
            wfreq[s2[i]-'a']++;
            i++;
        }
        if(compareFreq(freq,wfreq)) return true;

        while(i<s2.length()){
            // increment new char freq 
            wfreq[s2[i]-'a']++;
            // decrement freq of old char from window 
            wfreq[s2[i-winsize]-'a']--;
            i++;
            if(compareFreq(freq,wfreq)) return true;
        }
        return false;
    }
};
