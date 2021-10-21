class Solution {
    public int maxSubArray(int[] nums) {
        int m=nums[0],c=nums[0];
        for(int i=1;i<nums.length;i++)
        {
            m=Math.max(nums[i],m+nums[i]);
            c=Math.max(m,c);
        }
        return c;
    }
}
