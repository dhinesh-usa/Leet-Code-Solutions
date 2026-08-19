class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        
        int n = code.size();

        vector<int> arr(n,0);

        if(k == 0)
        {
            return arr;
        }

        for(int i = 0 ; i < n ; i ++)
        {

            int temp = 0;

            int j = (i + 1)%n;

            if(k  < 0)

                j = (i - 1 + n)%n;
            

            int count = 0;

            while(count < abs(k))
            {
                temp = temp + code[j];

                if(k > 0)
                    j = (j + 1)%n;
                
                else if(k < 0)
                    j = (j - 1 + n)%n;

                count ++;
            }

            arr[i] = temp;
        }

        return arr;

    }
};