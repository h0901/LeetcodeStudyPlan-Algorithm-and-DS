class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
			int h1[1001]={0};
			int h2[1001]={0};
			for(auto it : nums1) 
					h1[it]++;   //counting frequency of numbers
			for(auto it : nums2)
					h2[it]++;
			for(int i = 0; i < 1001 ; i++)
			{
				if(h1[i] == h2[i])
					while(h1[i]--)
						res.push_back(i);
				else if(h1[i] > 0 and h2[i] > 0) {
					int tem = min(h1[i],h2[i]);
					while(tem--)
						res.push_back(i);
				}
        }
        return res;
    }
};
