class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int maxlen = 0;
        unordered_set<char> us;
        int left = 0;
        for(int i = 0;i < s.size();i++)
        {
            while(us.count(s[i])!=0)
            {
                us.erase(s[left]);
                left++;
            }
            us.insert(s[i]);
            if(i-left+1>maxlen)
            {
                maxlen = i-left+1;
            }
        }
        return maxlen;
    }
};