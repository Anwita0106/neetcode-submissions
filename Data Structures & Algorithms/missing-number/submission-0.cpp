class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        unordered_set<int>p;
        for(int i=0;i<n+1;i++)
        {
            p.insert(i);
        }
        for(int s:nums)
        {
            p.erase(s);
            
        }
        return *p.begin();
    }
};