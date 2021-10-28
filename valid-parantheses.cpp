class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        if(s[0]==']'||s[0]=='}'||s[0]==')')
            return false;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='('|| s[i]=='{'||s[i]=='[')
                stk.push(s[i]);
            else
            {
                if(!stk.empty()) {
                if(s[i]==')')
                {
                    if(stk.top()=='(')
                        stk.pop();
                    else 
                        return false;
                }
                else if(s[i]=='}')
                {
                    if(stk.top()=='{')
                        stk.pop();
                    else
                        return false;
                }
                else if(s[i]==']')
                {
                    if(stk.top()=='[')
                        stk.pop();
                    else
                        return false;
                }}
                else
                    return false;
            }
        }
        return stk.empty();
    }
};
