class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>ans;
        vector<int>res;
        res.push_back(1);
        ans.push_back(res);
        for(int i=1; i<n; i++){
            vector<int>temp;
            temp.push_back(1);
            if(res.size()>1)
            {  int sum=0;
                for(int i=0; i<res.size()-1; i++){
                      temp.push_back(res[i]+res[i+1]);
                }  
            }
            temp.push_back(1);
            ans.push_back(temp);
            res=temp;
        }
        return ans;
    }
};
