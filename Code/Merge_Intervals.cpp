//Merge Intervals
//Error

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        int n=intervals.size();
        
        for(int i=;i<n;++i)
        {
            if(intervals[i][1]>=intervals[i+1][0])
            {
                intervals[i][1]=intervals[i+1][1];
                intervals.erase(intervals.begin() +1);
                --n;
            }
        }
        
        return intervals;
    }
};