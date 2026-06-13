class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int limit = nums.size()/3;

        vector<int> result;

        unordered_map<int , int> seen;

        for(int i = 0 ; i < nums.size(); i++)
        {
            seen[nums[i]]++;
        }

        for(auto &p : seen)
        {
            if(p.second > limit)
            {
                result.push_back(p.first);
            }
        }

        return result;
    }
};