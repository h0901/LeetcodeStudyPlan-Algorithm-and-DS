class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cnt=0;
        vector<int> vec;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
                vec.push_back(nums[i]);
            else cnt++;
        }
        for(int i=0;i<cnt;i++)
            vec.push_back(0);
        nums=vec;
    }
};
