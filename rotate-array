class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        deque <int> q;
        for(int i=0;i<nums.size();i++)
            q.push_back(nums[i]);
        while(k--)
        {
            int a = q.back();
            q.pop_back();
            q.push_front(a);
        }
        int i=0;
        while(!q.empty())
        {
            nums[i]=q.front();
            q.pop_front();
            i++;
        }
    }
};
