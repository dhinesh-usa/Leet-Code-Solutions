class Solution {
public:
    string longestPalindrome(string s) {

        string result = s.substr(0,1);

        int maxlen =1;

        for(int i = 0; i < s.size(); i ++)
        {
            for(int j = s.size()-1; j > i; j --)
            {
                
                if(s[i] == s[j])
                {
                    int left = i;
                    int right = j;

                    bool check = true;

                    while(left < right)
                    {
                        if(s[left] != s[right])
                        {
                            check =  false;
                            break;
                        }
                        left++;
                        right--;
                    }

                    if(check)
                    {
                        int temp = j-i+1;
                        
                        if(temp > maxlen)
                        {
                            maxlen = temp;
                            result = s.substr(i,j-i+1);
                        }
                    }
                }     
                   
            }
        }


        return result;

    }
};