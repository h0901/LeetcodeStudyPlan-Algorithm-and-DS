class Solution {
public:
    string reverse(string s) {
        for(int i=0;i<s.length()/2;i++)
            swap(s[i],s[s.length()-i-1]);
        return s;
    }
    string reverseWords(string s) {
        string str="";
        vector<string> vec;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                vec.push_back(str);
                str="";
                continue;
            }
            str+=s[i];
        }
        vec.push_back(str);
        str="";
        for(int i=0;i<vec.size();i++)
        {
            str+=reverse(vec[i])+" ";
        }
        str.pop_back();
        return str;
    }
};
