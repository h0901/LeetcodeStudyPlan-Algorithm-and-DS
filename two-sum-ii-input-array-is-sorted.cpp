class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int l=0;
        int r=nums.size()-1;
        while(l<r)
        {
            if(nums[l]+nums[r]==target)
            {
                cout<<l<<endl<<r;
                ans.push_back(l+1);
                ans.push_back(r+1);
                break;
            }
            else if(nums[l]+nums[r]>target)
                r--;
            else
                l++;
        }
        return ans;
    }
};
