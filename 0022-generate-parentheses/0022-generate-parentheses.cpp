class Solution {
public:
    bool isvalid(string str){
        int open=str.length()/2;
        int close=str.length()/2;
        for(int i=0;i<str.length();i++){
            if(str[i]=='('){
                open--;
            }
            else if(str[i]==')' && open<close){
                close--;
            }
            else{
                return false;
            }
        }
        if(open==0 && close==0)
        return true;
        else
        return false;
    }
    void find(vector<string>&res,int n,string temp){
        if(temp.length()==n*2){
            if(isvalid(temp))
            res.push_back(temp);
            return;
        }
        find(res,n,temp+"(");
        find(res,n,temp+")");
    }
    vector<string> generateParenthesis(int n) {
        vector<string>res;
        string temp;
        find(res,n,temp);
        return res;
    }
};