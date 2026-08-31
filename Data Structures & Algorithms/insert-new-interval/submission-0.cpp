class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval)
    {
         if(intervals.empty())
        {
            return {newInterval};
        }

        intervals.push_back(newInterval);

        sort(intervals.begin(), intervals.end());

        vector<vector<int>> merged;

        merged.push_back(intervals[0]);

        for(int i = 1; i < intervals.size(); i++)
        {
            if(intervals[i][0] <= merged.back()[1])
            {
                merged.back()[1] =
                    max(merged.back()[1], intervals[i][1]);
            }
            else
            {
                merged.push_back(intervals[i]);
            }
        }

        return merged;
    }
};