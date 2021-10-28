class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,bool>mpp;
        int i,j,len,maxlen;
        len=maxlen=0;
        for(i=0;i<s.length();i++){
            for(j=i;j<s.length();j++){
                if(mpp[s[j]]==0){
                    len++;
                    maxlen=max(maxlen,len);
                    mpp[s[j]]=true;
                }
                else{
                    mpp.clear();
                    len=0;
                    break;
                }
            }
        }
        return maxlen;
    }
};
