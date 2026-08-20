class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        
        int n = code.size();

        vector<int> arr(n,0);

        int temp = 0;

        int left = 0;

        int right = 0;

        if(k == 0)
        {
            return arr;
        }

        if(k < 0)
        {

            left = 0;

            right = 0;

            left = ((left - abs(k))%n + n)%n;

            right = left;

            for(int i = 0 ; i < abs(k) ; i ++)
            {
                temp += code[right];

                right = (right + 1)%n;
            }

            arr[0] = temp;

            for(int i = 1 ; i < n ; i ++)
            {
                temp += code[right];

                right = (right + 1)%n;

                temp -= code[left];

                left = (left + 1)%n;

                arr[i] = temp;
            }

            return arr;

        }
            
        left = (left + 1)%n;

        right = left;

        for(int i = 0 ; i < k ; i ++)
        {
            temp += code[right];

            right = (right + 1)%n;
        }

        arr[0] = temp;


        for(int i = 1 ; i < n; i ++)
        {
            temp -= code[left];

            left = (left + 1)%n;

            temp += code[right];

            right = (right + 1)%n;

            arr[i] = temp;
        }


        return arr;
    }
};