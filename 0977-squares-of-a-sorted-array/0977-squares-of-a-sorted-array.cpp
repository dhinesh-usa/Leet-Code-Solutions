class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector<int> arr;

        for(int i : nums)
        {
            arr.push_back(i*i);
        }

        sort(arr.begin(), arr.end());

        return arr;
    }
};