class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        std::vector<int>::iterator found;
        int i;
       found=find(nums.begin(),nums.end(),target);
       if(found!=nums.end())
            return found-nums.begin();
       else
       {
           for(i=0;i<nums.size();i++)
           {
               if(nums[i]>target)
                   break;
           }
       }
        return i;
    }
};
