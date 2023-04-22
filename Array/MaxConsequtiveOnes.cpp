// https://leetcode.com/problems/max-consecutive-ones/description/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& n) {
        int c=0,mc=0;
        for (int i=0;i<n.size();i++)
        {
            if (n[i]==1)
                c++;
            if (c>mc)
                mc=c;
            if (n[i]!=1)
                c=0;
        }
        return mc;
    }
};
