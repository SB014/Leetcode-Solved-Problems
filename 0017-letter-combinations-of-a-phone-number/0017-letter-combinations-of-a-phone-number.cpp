class Solution {
private:
    void solve(string digits,string output,string keypad[],int index,vector<string> &ans){
        if(index >= digits.size()){
            ans.push_back(output);
            return;
        }
        
        //include
        int i=digits[index]-'0';
        string s = keypad[i];
        for(auto k:s){
            output.push_back(k);
            solve(digits, output, keypad, index+1, ans);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        string keypad[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string output="";
        vector<string> ans;
        int index =0;
        //this is the case where digits is empty(do not confuse with 0)
        if(digits.length()==0){
            return ans;
        }
        solve(digits, output, keypad, index, ans);
        return ans;
    }
};