class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.empty()) return 0;
        
        set<int> tosort;
        
        for(int i : nums)
        {
            tosort.insert(i);
        }

        nums.clear();

        for(int i : tosort)
        {
            nums.push_back(i);
        }



        int count = 1;
        int maxcount = 1;

        for(int i = 1; i < nums.size(); i ++)
        {
            if(nums[i-1] == nums[i])
            {
                continue;
            }

            else if(nums[i-1] + 1 == nums[i])
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