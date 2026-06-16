class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.empty()) return 0;
        
        set<int> tosort;

        vector<int> sorted;

        for(int i : nums)
        {
            tosort.insert(i);
        }

        for(int i : tosort)
        {
            sorted.push_back(i);
        }

        int count = 1;
        int maxcount = 1;

        for(int i = 1; i < sorted.size(); i ++)
        {
            if(sorted[i-1] == sorted[i])
            {
                continue;
            }

            else if(sorted[i-1] + 1 == sorted[i])
            {
                count ++;
            }
            else
            {
                maxcount = max(maxcount , count);
                count = 1;
            }
        }

        return max(maxcount , count);
    }
};