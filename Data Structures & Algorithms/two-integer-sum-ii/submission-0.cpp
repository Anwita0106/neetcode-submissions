class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
      unordered_map<int,int>mp;
      int n=numbers.size();
      for(int i=0;i<n;i++)
      {
        int c=target-numbers[i];
        if(mp.find(c)!=mp.end())
        {
            return {mp[c]+1,i+1};
        }
        mp[numbers[i]]=i;
      
      }
      return {};
    }
};