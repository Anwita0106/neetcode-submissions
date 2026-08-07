class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;
        for(int n:nums)
        {
            s.insert(n);
        }
        int cnt=0;
        for(int p:s)
        {
            if (s.find(p - 1) == s.end())
            {
            int len=1;
            int next=p+1;
            while(s.find(next)!=s.end())
            {
                len++;
                next++;
            }
            cnt=max(len,cnt);
            }
        }
        return cnt;
    }
};