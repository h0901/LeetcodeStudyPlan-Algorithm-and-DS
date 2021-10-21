class Solution {
public:
    int firstBadVersion(int n) {
        if(!isBadVersion(n))
            return n+1;
        else
            return firstBadVersion(n-1);
    }
};
