class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int matR = mat.size();
        int matC = mat[0].size();
        if( matR * matC != r * c)
            return mat;
        
        std::vector<int> temp;        
        int i, j, k = 0;
        for(i = 0; i < matR; i++)
            for(int& val : mat[i])
                temp.push_back(val);
        
        std::vector<vector<int>> res(r);
        for(i = 0; i < r; i++)
            for(j = 0; j < c; j++)
                res[i].push_back(temp[k++]);
        
        return res;
    }
};
