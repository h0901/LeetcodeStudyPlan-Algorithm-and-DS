class Solution {
public:
    bool isAnagram(string s, string t) {
        map<int,int> sm;
        map<int,int> tm;
        for(int i=0;i<s.length() || i<t.length();i++)
        {
            sm[s[i]]++;
            tm[t[i]]++;
        }
        for(int i=0;i<s.length() || i<t.length();i++)
        {
            if(sm[s[i]] != tm[s[i]])
            {
                return false;
            }
        }
        return true;
    }
};
