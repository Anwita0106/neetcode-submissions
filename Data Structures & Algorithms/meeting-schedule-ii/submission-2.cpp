class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        int n = intervals.size();
        vector<int> starts, ends;
        for (int k = 0; k < n; k++) {
            starts.push_back(intervals[k].start);
            ends.push_back(intervals[k].end);
        }
        sort(starts.begin(), starts.end());
        sort(ends.begin(), ends.end());

        int i = 0, j = 0;
        int rooms = 0, maxRooms = 0;

        while (i < n) {
            if (starts[i] < ends[j]) {
                rooms++;
                maxRooms = max(maxRooms, rooms);
                i++;
            } else {
                rooms--;
                j++;
            }
        }

        return maxRooms;
    }
};