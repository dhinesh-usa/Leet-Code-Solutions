class Solution {
public:
    int majorityElement(vector<int>& nums) {
        

        unordered_map<int , int> seen;

        for(int i = 0; i < nums.size(); i++)
        {
            seen[nums[ i ] ] ++;
        }

        int max_value = 0;
        int max_element = 0;

        for(auto &p : seen)
        {
            if(p.second > max_value)
            {
                max_value = p.second;
                max_element = p.first;
            }
        }

        return max_element;
    }
};